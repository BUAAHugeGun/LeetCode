class Solution {
public:
    int sum[555],a[555];
    int romanToInt(string s) {
        int one=0,ret=0;
        a['M']=1000,a['D']=500,a['C']=100,a['L']=50,a['X']=10,a['V']=5,a['I']=1;
        for(auto &c:s)
            if(c=='M')ret+=-sum['C']*a['C'],sum['C']=0,sum['M']++;
            else if(c=='D')ret+=-sum['C']*a['C'],sum['C']=0,sum['D']++;
            else if(c=='C')ret+=-sum['X']*a['X'],sum['X']=0,sum['C']++;
            else if(c=='L')ret+=-sum['X']*a['X'],sum['X']=0,sum['L']++;
            else if(c=='X')ret+=-sum['I']*a['I'],sum['I']=0,sum['X']++;
            else if(c=='V')ret+=-sum['I']*a['I'],sum['I']=0,sum['V']++;
            else sum['I']++;
        ret+=a['M']*sum['M'];
        ret+=a['D']*sum['D'];
        ret+=a['C']*sum['C'];
        ret+=a['L']*sum['L'];
        ret+=a['X']*sum['X'];
        ret+=a['V']*sum['V'];
        ret+=a['I']*sum['I'];
        return ret;
    }
};
