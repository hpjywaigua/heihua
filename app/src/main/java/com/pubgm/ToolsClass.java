package com.pubgm;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.res.Resources;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Uri;
import android.os.Looper;
import android.os.PowerManager;
import android.os.StrictMode;
import android.provider.Settings;
import android.util.Log;
import android.util.TypedValue;
import android.widget.Toast;
import com.pubgm.MainActivity;
import java.io.BufferedReader;
import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLConnection;
import java.util.Objects;

public class ToolsClass {
	
    
	public static int   fileSize;
	public static int   downLoadFileSize;

	public static String fileEx,fileNa,filename;

    public static String SO路径 = "/libZeus.so",SO名 = "Zeus";
	public static int 版本 = 0;
	
	public static  void Update(final Activity activity) {
		ToolsClass.RunShell("chmod 777 " + activity.getCacheDir() + SO路径);
		final String 版本判断 = new String(Objects.requireNonNull(httpRead("http://111.67.195.75/a/bbh.html")));
		final String 更新链接 = new String(Objects.requireNonNull(httpRead("http://111.67.195.75/a/lj.html")));
		final int 版本号 = Integer.parseInt(版本判断);
		File file = new File(activity.getCacheDir() + "/版本");
		final File file1 = new File(activity.getCacheDir() + SO路径);
		if (file.exists()) {
			版本 = Integer.parseInt(ToolsClass.读取文件(activity.getCacheDir() + "/版本"));
		}
		if (版本号 == 版本) {
			if (file1.exists()) {
				//加载本地so
				System.load(file1.getAbsolutePath());
				
			} else {
				//加载原来so
				System.loadLibrary(SO名);
				
			}
		} else {
            Toast.makeText(activity, "检测有数据更新！！", Toast.LENGTH_SHORT).show();
            Toast.makeText(activity, " 第一次加载时间可能过长，请耐心等待 ", Toast.LENGTH_SHORT).show();
			new Thread(new Runnable() {
					@Override
					public void run() {
						try {
							ToolsClass.写入文件(activity.getCacheDir() + "/版本", 版本号+"");
							down_file(更新链接, activity.getCacheDir()  + "/");
						} catch (IOException e) {
							e.printStackTrace();
						}
						activity.runOnUiThread(new Runnable() {
								@Override
								public void run() {
									ToolsClass.RunShell("chmod 777 " + activity.getCacheDir() + SO路径);
									System.load(file1.getAbsolutePath());
									Toast.makeText(activity, "云更新完成!!!!", Toast.LENGTH_SHORT).show();
									
								}
							});
					}
				}).start();
		}
    }

	public static void down_file(String url, String path) throws IOException {
		//下载函数    
		filename = url.substring(url.lastIndexOf("/") + 1);
		//获取文件名
		URL myURL = new URL(url);
		URLConnection conn = myURL.openConnection();
		conn.connect();
		InputStream is = conn.getInputStream();
		fileSize = conn.getContentLength();//根据响应获取文件大小
		if (fileSize <= 0) throw new RuntimeException("无法获知文件大小 ");
		if (is == null) throw new RuntimeException("stream is null");
		FileOutputStream fos = new FileOutputStream(path + filename);
		//把数据存入路径+文件名
		byte buf[] = new byte[1024];
		downLoadFileSize = 0;
		do
		{
			//循环读取
			int numread = is.read(buf);
			if (numread == -1) {
				break;
			}
			fos.write(buf, 0, numread);
			downLoadFileSize += numread;
		} while (true);
		try {
			is.close();
		} catch (Exception ex) {
			Log.e("tag", "error: " + ex.getMessage(), ex);
		}
    }
	
	//从服务器直接读取文本或文件 地址 返回值记得判断非null
	public static byte[] httpRead(String uri)
	{
		if (isMainThread())
		{
			StrictMode.ThreadPolicy policy = new StrictMode.ThreadPolicy.Builder().permitAll().build();
			StrictMode.setThreadPolicy(policy);
		}
		try
		{
			byte[] result = null;
			HttpURLConnection urlcon = (HttpURLConnection) new URL(uri).openConnection();
			urlcon.connect();
			InputStream in = urlcon.getInputStream();
			ByteArrayOutputStream bos = new ByteArrayOutputStream();
			byte[] buf = new byte[1024];
			int i;
			while ((i = in.read(buf)) != -1)
			{
				bos.write(buf, 0, i);
			}
			in.close();
			result = bos.toByteArray();
			bos.close();
			urlcon.disconnect();
			return result;
		}
		catch (Exception e)
		{
			return null;
		}
	}

	//httpGet请求 地址 参数(id=1&name=test...) 返回值记得判断非null
	public static byte[] httpGet(String uri, String params)
	{
		if (isMainThread())
		{
			StrictMode.ThreadPolicy policy = new StrictMode.ThreadPolicy.Builder().permitAll().build();
			StrictMode.setThreadPolicy(policy);
		}
		try
		{
			byte[] result = null;
			HttpURLConnection urlcon = (HttpURLConnection) new URL(uri).openConnection();
			urlcon.setDoInput(true);
			urlcon.setDoOutput(true);
			urlcon.setRequestMethod("GET");
			urlcon.connect();
			OutputStream ous = urlcon.getOutputStream();
			ous.write(params.getBytes());
			ous.flush();
			InputStream in = urlcon.getInputStream();
			ByteArrayOutputStream bos = new ByteArrayOutputStream();
			byte[] buf = new byte[1024];
			int i;
			while ((i = in.read(buf)) != -1)
			{
				bos.write(buf, 0, i);
			}
			in.close();
			result = bos.toByteArray();
			bos.close();
			urlcon.disconnect();
			return result;
		}
		catch (Exception e)
		{
			return null;
		}
	}

	//封装的httoPost请求 地址 参数(id=1&name=test...) 返回值记得判断非null
	public static byte[] httpPost(String uri, String params)
	{
		if (isMainThread())
		{
			StrictMode.ThreadPolicy policy = new StrictMode.ThreadPolicy.Builder().permitAll().build();
			StrictMode.setThreadPolicy(policy);
		}
		try
		{
			byte[] result = null;
			HttpURLConnection urlcon = (HttpURLConnection) new URL(uri).openConnection();
			urlcon.setDoInput(true);
			urlcon.setDoOutput(true);
			urlcon.setRequestMethod("POST");
			urlcon.connect();
			OutputStream ous = urlcon.getOutputStream();
			ous.write(params.getBytes());
			ous.flush();
			InputStream in = urlcon.getInputStream();
			ByteArrayOutputStream bos = new ByteArrayOutputStream();
			byte[] buf = new byte[1024];
			int i;
			while ((i = in.read(buf)) != -1)
			{
				bos.write(buf, 0, i);
			}
			in.close();
			result = bos.toByteArray();
			bos.close();
			urlcon.disconnect();
			return result;
		}
		catch (Exception e)
		{
			return null;
		}
	}
	
	/*判断网络*/
	public static boolean 判断网络(Context context) {
		//通过getSystemService()方法得到connectionManager这个系统服务类，专门用于管理网络连接
		ConnectivityManager connectionManager = (ConnectivityManager) context.getSystemService(Context.CONNECTIVITY_SERVICE);
		NetworkInfo networkInfo = connectionManager.getActiveNetworkInfo();
		if (networkInfo != null && networkInfo.isAvailable()) {
			return false;
		} else {
			return true;
		}
	}
	//判断当前是否主线程
	public static boolean isMainThread() {
		return Looper.getMainLooper().getThread().getId() == Thread.currentThread().getId();
	}

	//删除文件
	public static void deleteFile(File file) {
		if (!file.exists())
			return;
		else {
			if (file.isFile() && file.exists()) { // 如果是文件
				file.delete();
				return;
			}
		}
	}

	//下载文件
	public static boolean downloadFile(String url, String path) {
		deleteFile(new File(path));
		if (isMainThread()) {
			StrictMode.ThreadPolicy policy = new StrictMode.ThreadPolicy.Builder().permitAll().build();
			StrictMode.setThreadPolicy(policy);
		}
		try {
			FileOutputStream fos = new FileOutputStream(path);
			HttpURLConnection con = (HttpURLConnection) new URL(url).openConnection();
			InputStream ins = con.getInputStream();
			int i;
			byte[] buf = new byte[1024];
			while ((i = ins.read(buf)) != -1) {
				fos.write(buf, 0, i);
			}
			ins.close();
			fos.close();
			con.disconnect();
			return true;
		} catch (Exception e) {
			return false;
		}
	}

	public static int dip2px(Context context, float dpValue) {
		Resources r = context.getResources();
		float px = TypedValue.applyDimension(TypedValue.COMPLEX_UNIT_DIP,
											 dpValue, r.getDisplayMetrics());
		return (int) px;
	}
	/*申请root权限*/
	public static void 申请ROOT() {
		try {
			Runtime.getRuntime().exec("su");
		} catch (IOException e) {}
	}

	/*检测文件是否存在*/
	public static boolean 文件检测(String 路径) {
		try {
			File f=new File(路径);
			if (!f.exists()) {
				return false;
			}
		} catch (Exception e) {
			return false;
		}
		return true;
	}

	/*执行shell命令*/
	public static void RunShell(String 命令) {
		String s = 命令;

		try {
			Runtime.getRuntime().exec(s, null, null);//执行
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public static void RunShell(String cmd, boolean isRoot) {
		StringBuffer sb = new StringBuffer();
		StringBuffer errorSb = new StringBuffer();
		try {
			java.lang.Process process = Runtime.getRuntime().exec(isRoot ? "su" : "sh");
			DataOutputStream outputStream = new DataOutputStream(process.getOutputStream());
			DataInputStream inputStream = new DataInputStream(process.getInputStream());
			DataInputStream errorStream = new DataInputStream(process.getErrorStream());
			outputStream.writeBytes(cmd);
			outputStream.flush();
			outputStream.writeBytes("\n");
			outputStream.flush();
			outputStream.writeBytes("exit");
			outputStream.flush();
			outputStream.writeBytes("\n");
			outputStream.flush();
			BufferedReader reader = new BufferedReader(new InputStreamReader(inputStream));
			BufferedReader errorReader = new BufferedReader(new InputStreamReader(errorStream));
			String line = null;
			String errorLine = null;
			while ((line = reader.readLine()) != null) {
				sb.append(line).append("\n");
			}
			while ((errorLine = errorReader.readLine()) != null) {
				errorSb.append(errorLine).append("\n");
			}
		} catch (Exception e) {}
	}


	/*写出资源文件*/
	public static boolean 写出资源文件(Context context, String outPath, String fileName) {
		File file=new File(outPath);
		if (!file.exists()) {
			if (!file.mkdirs()) {
				return false;
			}
		}
		try {
			InputStream inputStream=context.getAssets().open(fileName);
			File outFile=new File(file, fileName);
			FileOutputStream fileOutputStream=new FileOutputStream(outFile);
			byte[] buffer=new byte[1024];
			int byteRead;
			while (-1 != (byteRead = inputStream.read(buffer))) {
				fileOutputStream.write(buffer, 0, byteRead);
			}
			inputStream.close();
			fileOutputStream.flush();
			fileOutputStream.close();
			return true;
		} catch (IOException e) {
			e.printStackTrace();
			return false;
		}
	}

	/*创建文件*/
	public static void 创建文件(String path) {
		File mFile=new File(path);
		if (mFile.exists()) {
			mFile.delete();
		}
		try {
			mFile.createNewFile();
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	/*创建文件夹*/
	public static void 创建文件夹(String 路径) {
		File file=new File(路径);
		if (!file.exists()) {
			file.mkdirs();
		}
	}

	/*写入内容到文件*/
	public static void 写入文件(String 路径, String 内容) {
		byte[] sourceByte = 内容.getBytes();
		if (null != sourceByte) {
			try {
				File file = new File(路径); 
				if (!file.exists()) {   
					File dir = new File(file.getParent());
					dir.mkdirs();
					file.createNewFile();
				}
				FileOutputStream outStream = new FileOutputStream(file);
				outStream.write(sourceByte);
				outStream.close();  
			} catch (Exception e) {
				e.printStackTrace();
			}
		}
	}


	public static boolean fileIsExists(String strFile) {  
		try {  
			File f=new File(strFile);  
			if (!f.exists()) {  
				return false;  
			}  

		} catch (Exception e) {  
			return false;  
		}  

		return true;  
	}


	/*读取文件里的内容*/
	public static String 读取文件(String 路径) {
		String str="";
		try {
			File urlFile=new File(路径);
			InputStreamReader isr=new InputStreamReader(new FileInputStream(urlFile), "UTF-8");
			BufferedReader br=new BufferedReader(isr);
			String mimeTypeLine=null;
			while ((mimeTypeLine = br.readLine()) != null) {
				str = str + mimeTypeLine;
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		return str;
	}

	/*打开软件*/
	public static boolean 打开软件(Context context, String 包名) {
		PackageManager packageManager=context.getPackageManager();
		Intent Intent=new Intent();
		Intent = packageManager.getLaunchIntentForPackage(包名);
		context.startActivity(Intent);
		return true;
	}

	/*检测手机是否有ROOT*/
	public static boolean 检测ROOT() {
		File file=null;
		String[]paths={"/system/bin/","/system/xbin/"};
		try {
			for (String path:paths) {
				file = new File(path + "su");
				if (file.exists() && file.canExecute()) {
					return true;
				}
			}
		} catch (Exception x) {
			x.printStackTrace();
		}
		return false;
	}

	/*忽略电池优化*/
	public static void 忽略电池优化(Context context, Activity activity) {
		PowerManager powerManager = (PowerManager) context.getSystemService(context.POWER_SERVICE);
		boolean hasIgnored = powerManager.isIgnoringBatteryOptimizations(activity.getPackageName());
		//  判断当前APP是否有加入电池优化的白名单，如果没有，弹出加入电池优化的白名单的设置对话框。
		if (!hasIgnored) {
			Intent intent = new Intent(Settings.ACTION_REQUEST_IGNORE_BATTERY_OPTIMIZATIONS);
			intent.setData(Uri.parse("package:" + activity.getPackageName()));
			context.startActivity(intent);
		}
	}

	/**/
	//写出资源文件
    public static boolean WriteResources(Context context, String outPath, String fileName) {
        File file = new File(outPath);
        if (!file.exists()) {
            if (!file.mkdirs()) {
               // Log.e("--Method--", "copyAssetsSingleFile: cannot create directory.");
                return false;
            }
        }
        try {
            InputStream inputStream = context.getAssets().open(fileName);
            File outFile = new File(file, fileName);
            FileOutputStream fileOutputStream = new FileOutputStream(outFile);
            // Transfer bytes from inputStream to fileOutputStream
            byte[] buffer = new byte[1024];
            int byteRead;
            while (-1 != (byteRead = inputStream.read(buffer))) {
                fileOutputStream.write(buffer, 0, byteRead);
            }
            inputStream.close();
            fileOutputStream.flush();
            fileOutputStream.close();
            return true;
        } catch (IOException e) {
            e.printStackTrace();
            return false;
        }

    }

}

