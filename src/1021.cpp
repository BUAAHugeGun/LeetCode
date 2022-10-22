class Solution {
public:
    string removeOuterParentheses(string S) {
        string ret;
        int temp=0,state=0;
        for(auto &c:S)
        {
            if(c=='(')temp++;
            else temp--;
            if(temp==1&&state==0){state=1;continue;}
            if(temp==0&&state==1){state=0;continue;}
            ret+=c;
        }
        return ret;
    }
};
