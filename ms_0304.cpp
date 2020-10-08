class MyQueue {
public:
    stack<int> sta[2];
    /** Initialize your data structure here. */
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        sta[0].push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int ret=peek();
        sta[1].pop();
        return ret;
    }
    
    /** Get the front element. */
    int peek() {
        if(sta[1].empty())while(!sta[0].empty())sta[1].push(sta[0].top()),sta[0].pop();
        return sta[1].top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return sta[0].empty()&&sta[1].empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
