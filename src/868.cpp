class Solution {
public:
    int binaryGap(int n) {
        int shang=100,tot=0,Max=0;
        while(n)
        {
            int x=n&1;n>>=1;
            if(x)Max=max(Max,tot-shang),shang=tot++;
            else tot++;
        }
        return Max;
    }
};
