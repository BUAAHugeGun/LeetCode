class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int ex=1;
        for(int i=digits.size()-1;i>=0;i--)
        {
            digits[i]+=ex;
            ex=digits[i]/10;
            digits[i]%=10;
        }
        if(ex)digits.insert(digits.begin(),ex);
        return digits;
    }
};
