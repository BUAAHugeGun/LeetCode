class Solution {
public:
    string freqAlphabets(string s) {
        string ret;
        for(int i=0;i<s.length();i++)
        {
            if(i<s.length()-2&&s[i+2]=='#')ret+=(s[i]-'0')*10+(s[i+1]-'0')-10+'j',i+=2;
            else ret+=s[i]-'0'+'a'-1;
        }
        return ret;
    }
};
