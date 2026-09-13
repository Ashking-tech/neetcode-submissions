class MinStack {
public:
    std::stack<int> stck;
    std::stack<int>minStack;
    MinStack() {
        
    }
    
    void push(int val) {
        stck.push(val);
        if (!minStack.empty()) {
            val = std::min(val, minStack.top());
        }
        minStack.push(val);
    }
    
    void pop() {
        stck.pop();
        minStack.pop();

    }
    
    int top() {
       return stck.top();
    }
    
    int getMin() {
        return minStack.top();
    }

};
