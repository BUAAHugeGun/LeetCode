class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int Min=10010,Max=0;
        for(auto &x:A)Min=x<Min?x:Min,Max=x>Max?x:Max;
        return max(0,Max-Min-2*K);
    }
};
