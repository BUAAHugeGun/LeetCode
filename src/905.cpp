class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> ret;
        for(auto &x:A)if(!(x&1))ret.push_back(x);
        for(auto &x:A)if((x&1))ret.push_back(x);
        return ret;
    }
};
