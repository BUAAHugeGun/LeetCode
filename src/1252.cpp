class Solution {
public:
    int a[55],b[55];
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        for(auto &v:indices)
            a[v[0]]^=1,b[v[1]]^=1;
        int aa=0,bb=0;
        for(int i=0;i<n;i++)aa+=a[i];
        for(int i=0;i<m;i++)bb+=b[i];
        return aa*(m-bb)+(n-aa)*bb;
    }
};
