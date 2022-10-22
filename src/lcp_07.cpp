class Solution {
public:
    int ans[11][11];
    int dfs(int x,int k,vector<vector<int>> &son)
    {
        if(ans[x][k]!=-1)return ans[x][k];
        int &a=ans[x][k];
        a=0;
        if(!k)
            if(!x)return a=1;
            else return a=0;
        for(auto &s:son[x])
            a+=dfs(s,k-1,son);
        return a;
    }
    int numWays(int n, vector<vector<int>>& relation, int k) {
        vector<vector<int>> son(n);
        for(auto &v:relation)
            son[v[1]].push_back(v[0]);
        memset(ans,-1,sizeof(ans));
        return dfs(n-1,k,son);
    }
};
