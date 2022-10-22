class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(!numRows)
        {
            vector<vector<int>> ret;
            return ret;
        }
        vector<vector<int>> ret(numRows);
        ret[0].push_back(1);
        for(int i=1;i<numRows;i++)
        {
            ret[i].push_back(1);
            for(int j=1;j<i;j++)ret[i].push_back(ret[i-1][j-1]+ret[i-1][j]);
            ret[i].push_back(1);
        }
        return ret;
    }
};
