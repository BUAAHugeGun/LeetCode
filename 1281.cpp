class Solution {
public:
    int subtractProductAndSum(int n) {
        string s=to_string(n);
        int mul=1,sum=0;
        for(auto &c:s)
            mul*=(c-'0'),sum+=(c-'0');
        return mul-sum;
    }
};
