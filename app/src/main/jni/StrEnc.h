#if !defined(STR_ENC)
#define STR_ENC

class StrEnc {
private:
    char *s;
    int n;
public:
    StrEnc(const char *str, const char *key, int len);

    ~StrEnc();

    const char *c_str();
};

StrEnc::StrEnc(const char *str, const char *key, int len) : n(len) {
    s = new char[len + 1];
    for (int i = 0; i < len; i++) {
        s[i] = str[i] ^ key[i];
    }
    s[len] = 0;
}

StrEnc::~StrEnc() {
    s[0] = 0;
}

const char *StrEnc::c_str() {
    return s;
}

#endif
//======𝗦𝗥𝗖==𝗝𝗢𝗜𝗡==𝗧𝗘𝗟𝗘𝗚𝗥𝗔𝗠=@𝗚𝗞𝗣𝗙𝗥𝗘𝗘𝗛𝗔𝗖𝗞𝗦=======@GKPHACK========== //