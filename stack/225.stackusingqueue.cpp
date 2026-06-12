class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {
    
    }
    
    void push(int x) {
        // step 1 remove all ele
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        //step 2 add ele
        q1.push(x);

        //step 3 add left q2 elements to q1
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
       int ans = q1.front();
       q1.pop();
       return ans;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */