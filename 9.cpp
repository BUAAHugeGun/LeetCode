class Solution {
public:
    void itoa(int x,char *s)
    {
        char *t=s;
        if(!x)*t='0';
        while(x)*(t++)=x%10+'0',x/=10;
        *(t)=0;
    }
    bool isPalindrome(int x) {
        if(x<0)return 0;
        char s[33];
        itoa(x,s+1);
        int len=strlen(s+1);
        for(int i=1;i<=len;i++)
            if(s[i]!=s[len-i+1])return 0;
        return 1;
    }
};
