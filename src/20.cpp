class Solution {
public:
    char sta[10010];int top=0;
    bool isValid(string s) {
        for(auto ch:s)
        {
            if(ch=='('||ch=='['||ch=='{')sta[++top]=ch;
            else 
            {
                if(!top)return 0;
                if(ch==')'&&sta[top]!='(')return 0;
                if(ch==']'&&sta[top]!='[')return 0;
                if(ch=='}'&&sta[top]!='{')return 0;
                top--;
            }
        }
        return top==0;
    }
};
