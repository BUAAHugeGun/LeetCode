class Solution {
public:
    int myAtoi(string s) {
        s+='#';
        int i=0,f=0;
        long long x=0;
        while(s[i]==' ')i++;
        if(s[i]=='-')f=1,i++;
        else if(s[i]=='+')i++;
        while(s[i]>='0'&&s[i]<='9')
        {
            x=x*10+s[i]-'0',i++;
            if(!f&&x>=2147483647LL)return 2147483647;
            else if(f&&x>=2147483648LL)return -2147483648;
        }
        return f?-x:x;
    }
};
