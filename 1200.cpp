class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int Min=2000020;
        for(int i=1;i<arr.size();i++)Min=min(Min,arr[i]-arr[i-1]);
        vector<vector<int>> ret;
        for(int i=1;i<arr.size();i++)
            if(Min==arr[i]-arr[i-1])
            {
                vector<int> t(2);
                t[0]=arr[i-1],t[1]=arr[i];
                ret.push_back(t);
            }
        return ret;
    }
};
