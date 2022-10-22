class RecentCounter {
public:
    int sta[10010],top,l;
    RecentCounter() {
        top=0;
        l=1;
    }
    
    int ping(int t) {
        sta[++top]=t;
        while(sta[top]-sta[l]>3000)l++;
        return top-l+1;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
