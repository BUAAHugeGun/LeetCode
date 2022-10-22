class Solution {
public:
    int shang[333];
    int maxLengthBetweenEqualCharacters(string s) {
        int ret=-1;
        for(int i=0;i<s.length();i++)
            if(!shang[s[i]])shang[s[i]]=i+1;
            else ret=max(ret,i-shang[s[i]]);
        return ret;
    }
};
