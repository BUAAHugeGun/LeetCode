class Solution {
public:
    vector<int> printNumbers(int n) {
        n=pow(10,n);
        vector<int> ret;
        for(int i=1;i<n;i++)ret.push_back(i);
        return ret;
    }
};
