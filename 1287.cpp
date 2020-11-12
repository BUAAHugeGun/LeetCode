class Solution {
public:
    int erfen(int x,vector<int>& arr)
    {
        auto l=lower_bound(arr.begin(),arr.end(),x);
        auto r=upper_bound(arr.begin(),arr.end(),x);
        int ll=l-arr.begin(),rr;
        if(r==arr.end())rr=arr.size();
        else rr=r-arr.begin();
        return r-l;
    }
    int findSpecialInteger(vector<int>& arr) {
        if(arr.size()<4)return arr[0];
        int n=(arr.size()-1)/4+1;
        if(erfen(arr[0],arr)>n)return arr[0];
        if(erfen(arr[n],arr)>n)return arr[n];
        if(erfen(arr[2*n],arr)>n)return arr[2*n];
        return arr[3*n];
    }
};
