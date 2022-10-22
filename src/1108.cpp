class Solution {
public:
    string defangIPaddr(string address) {
        string ret;
        for(auto &x:address)
            if(x!='.')ret+=x;
            else ret+="[.]";
        return ret;
    }
};
