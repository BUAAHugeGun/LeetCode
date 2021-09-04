class Solution {
public:
    
    int climbStairs(int n) {
        vector<int> t;
        t.push_back(1),t.push_back(1);
        for(int i=2;i<=n;i++)t.push_back(t[i-2]+t[i-1]);
        return t[n];
    }
};
