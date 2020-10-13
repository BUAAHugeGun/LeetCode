int wei[1010];
bool cmp(int a,int b)
{
    return wei[a]<wei[b];
}
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        memset(wei,-1,sizeof(wei));
        for(int i=0;i<arr2.size();i++)wei[arr2[i]]=i;
        for(auto &x:arr1)if(wei[x]==-1)wei[x]=1001+x;
        sort(arr1.begin(),arr1.end(),cmp);
        return arr1;
    }
};
