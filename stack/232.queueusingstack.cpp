class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        //setp 1 remove every ele from s1 and make it empty
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }        

        // add new ele and make it top
        s1.push(x);

        // step 3 add the elements that was copied from s1 to s2 back to s1
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int poped = s1.top();
        s1.pop();
        return poped;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
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