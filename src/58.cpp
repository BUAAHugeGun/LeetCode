class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0,temp=0;
        for(auto c:s)
        {
            if(c==' '&&temp)ans=temp,temp=0;
            else if(c!=' ')temp++;
        }
        if(temp)ans=temp;
        return ans;
    }
};
