class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int temp=-1,t;
        for(int i=arr.size()-1;i>=0;i--)
            t=arr[i],arr[i]=temp,temp=max(temp,t);
        return arr;
    }
};
