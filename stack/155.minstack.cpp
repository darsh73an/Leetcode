class MinStack {
public:
            // sc : 0(2*n)
            // val,minVal
    stack<pair<int,int>> s;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push({val,val});
        }else{
            int minVal = min(val,s.top().second);
            s.push({val,minVal});
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

//         Time Complexity:
// push()   -> O(1)
// pop()    -> O(1)
// top()    -> O(1)
// getMin() -> O(1)

// Space Complexity:
// O(n)

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

 //2nd approach need to learn once again

 class MinStack {
public:
    stack<long long int> s; // Main stack for elements
    long long int minVal;   // Stores current minimum
    MinStack() {}           // Constructor
    
    void push(int val) {
        if(s.empty()){      // If first element
            s.push(val);    // Push value
            minVal = val;   // Set initial min
        }else{
            if(val < minVal){ // New minimum found
                long long int curVal = 2LL*val - minVal; // Encode previous min
                s.push(curVal); // Push encoded value
                minVal = val;   // Update current min (Fixed from curVal)
            }else{
                s.push(val);    // Push normal value
            }
        }
    }
    
    void pop() {
        if(s.top() < minVal){ // If top is encoded (less than minVal)
            minVal = 2LL*minVal - s.top(); // Restore previous min
        }
        s.pop(); // Remove top element
    }
    
    int top() {
        if(s.top() < minVal) return minVal; // If encoded, minVal is the top
        return s.top(); // Return actual value
    }
    
    int getMin() {
        return minVal; // Return current min
    }
};
