class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(auto &c:s)if(c>='A'&&c<='Z')
            t+=c+'a'-'A';
        else if(c>='a'&&c<='z')t+=c;
        else if(c>='0'&&c<='9')t+=c;
        int len=t.length();
        for(int i=0;i<len/2;i++)if(t[i]!=t[len-i-1])return 0;
        return 1;
    }
};
