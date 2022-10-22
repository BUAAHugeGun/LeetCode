class Solution {
public:
    int pos,bo,Max;
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ret;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            pos=0;
            bo=1;
            Max=0;
            for(int j=1;j<m;j++)pos=matrix[i][j]<matrix[i][pos]?j:pos;
            for(int j=0;j<n;j++)Max=matrix[j][pos]>Max?matrix[j][pos]:Max;
            if(Max==matrix[i][pos])ret.push_back(matrix[i][pos]);
        }
        return ret;
    }
};
