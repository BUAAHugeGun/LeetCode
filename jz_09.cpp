class CQueue {
public:
    stack<int> sta[2];
    CQueue() {

    }
    
    void appendTail(int value) {
        sta[0].push(value);
    }
    
    int deleteHead() {
        if(sta[0].empty()&&sta[1].empty())return -1;
        if(sta[1].empty())while(!sta[0].empty())sta[1].push(sta[0].top()),sta[0].pop();
        int ret=sta[1].top();
        sta[1].pop();
        return ret;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
