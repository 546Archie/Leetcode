class MinStack {
private:
    vector<pair<int, int>> stack;
public:
    /** initialize your data structure here. */
    MinStack() {    
    }
    
    void push(int val) {
//        stack.push_back(val);
        if(stack.empty())
            stack.emplace_back(val, val);
        else//if this is not the only element in this vector
            stack.emplace_back(val, min(stack.back().second, val));
    }
    
    void pop() {
        stack.pop_back();
    }
    
    //return the first element of this pair
    int top() {
        return stack.back().first;
    }
    
    int getMin() {
        return stack.back().second;
    }
    
};

