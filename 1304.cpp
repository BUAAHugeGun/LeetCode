class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ret;
        for(int i=1;i<=(n>>1);i++)ret.push_back(i),ret.push_back(-i);
        if(n&1)ret.push_back(0);
        return ret;
    }
};
