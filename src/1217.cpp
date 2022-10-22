class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int ret=0;
        for(auto &x:position)ret+=x&1;
        return min(ret,(int)position.size()-ret);
    }
};
