class Solution {
public:
    unordered_map<int,vector<vector<int>>> mp;
    inline int dis(int a,int b,int c,int d)
    {
        return abs(a-c)+abs(b-d);
    }
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        for(int i=0;i<R;i++)
            for(int j=0;j<C;j++)
            {
                int d=dis(i,j,r0,c0);
                if(!mp.count(d))
                {
                    vector<vector<int>> t;
                    mp[d]=t;
                }
                vector<int> t(2);
                t[0]=i,t[1]=j;
                mp[d].push_back(t);
            }
        vector<vector<int>> ret;
        for(int i=0;i<=R+C;i++)if(mp.count(i))
            for(auto &x:mp[i])ret.push_back(x);
        return ret;
    }
};
