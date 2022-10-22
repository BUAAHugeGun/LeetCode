class Solution {
public:
    int a[111],b[111];
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                a[i]+=mat[i][j],b[j]+=mat[i][j];
        int ret=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(mat[i][j]&&a[i]==1&&b[j]==1)ret++;
        return ret;
    }
};
