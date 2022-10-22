class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ret=0;
        for(int i=0;i<mat.size();i++)ret+=mat[i][i]+mat[mat.size()-i-1][i];
        if(mat.size()%2==1)ret-=mat[mat.size()/2][mat.size()/2];
        return ret;
    }
};
