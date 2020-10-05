class Solution {
public:
    unordered_map<int,bool> mp;
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int Max=-1000001,Min=1000001;
        for(auto &x:arr)Max=x>Max?x:Max,Min=x<Min?x:Min;
        int cha=Max-Min;
        if(cha%(arr.size()-1))return 0;
        int p=cha/(arr.size()-1);
        if(!p)return 1;
        int tot=0;
        for(auto &x:arr)
        {
            cha=x-Min;
            if(cha%p)return 0;
            if(!mp.count(x))tot++;
            else return 0;
            mp[x]=1;
        }
        return 1;
    }
};
