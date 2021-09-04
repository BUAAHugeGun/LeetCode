class Solution {
public:
    int sta[33],top=0;
    int reverse(int x) {
        if(!x)return 0;
        bool f=x<0;
        if (f)
        {
            x=~x;
            if(x==2147483647)return 0;
            x++;
        }
        while(x)sta[++top]=x%10,x/=10;
        uint32_t y=sta[1];
        for(int i=2;i<=top;i++)
        {
            if(y*10/10!=y)return 0;
            uint32_t temp=y*10+sta[i];
            if(temp>2147483647)return 0;
            y=temp;
        }
        return f?-(int)y:y;
    }
};
