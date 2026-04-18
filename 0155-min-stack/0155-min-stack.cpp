class MinStack {
    stack<long long> s; long long minEle;
public:
    void push(int val) {
        if (s.empty()) { s.push(val); minEle = val; }
        else if (val < minEle) { s.push(2LL*val - minEle); minEle = val; }
        else s.push(val);
    }
    void pop() {
        long long t = s.top(); s.pop();
        if (t < minEle) minEle = 2*minEle - t;
    }
    int top() { return s.top() < minEle ? (int)minEle : (int)s.top(); }
    int getMin() { return (int)minEle; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */