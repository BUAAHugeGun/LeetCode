class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        for(auto &x:arr)x=x&1;
        if(arr.size()<3)return 0;
        int temp=arr[0]+arr[1]+arr[2];
        if(temp==3)return 1;
        for(int i=3;i<arr.size();i++)
        {
            temp-=arr[i-3];
            temp+=arr[i];
            if(temp==3)return 1;
        }
        return 0;
    }
};
