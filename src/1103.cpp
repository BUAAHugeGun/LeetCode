class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        double n=(-1.+sqrt(1+8.*candies))/2;
        int nn=n;
        if(nn*(nn+1)/2<candies)nn++;
        int a=nn/num_people,b=nn%num_people;
        vector<int> ret(num_people);
        for(int i=0;i<num_people;i++)
        {
            if(i==b)a--;
            int x=i+1;
            ret[i]=(x+x+num_people*a)*(a+1)/2;
        }
        ret[!b?num_people-1:b-1]-=(nn*(nn+1)/2)-candies;
        return ret;
    }
};
