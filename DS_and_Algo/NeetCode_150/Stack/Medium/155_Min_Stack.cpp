/*
Link to problem - https://leetcode.com/problems/min-stack/
Approach - Maintain a separate stack for the min element (Reference - https://leetcode.com/problems/min-stack/discuss/49016/C%2B%2B-using-two-stacks-quite-short-and-easy-to-understand and https://www.youtube.com/watch?v=qkLl7nAwDPo&ab_channel=NeetCode)
Time complexity - O(1)
Space complexity - O(n)
*/


class MinStack {
private:
    stack<int> s1;
    stack<int> s2;
public:
    void push(int val) {
        s1.push(val);
        if(s2.empty() || val <= getMin()) s2.push(val);
    }
    
    void pop() {
        if(s1.top() == getMin()) s2.pop();
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */