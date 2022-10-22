class Solution {
public:
    double average(vector<int>& salary) {
        int sum=0,Min=1000001,Max=0;
        for(auto &x:salary)sum+=x,Min=min(Min,x),Max=max(Max,x);
        return 1.*(sum-Max-Min)/(salary.size()-2);
    }
};
