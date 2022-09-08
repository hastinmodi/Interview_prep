/*
Link to problem - https://leetcode.com/problems/evaluate-reverse-polish-notation/
Approach - Pop the first 2 elements of the stack to calculate the value (Reference - https://leetcode.com/problems/evaluate-reverse-polish-notation/discuss/47544/Challenge-me-neat-C%2B%2B-solution-could-be-simpler)
Time complexity - O(n)
Space complexity - O(n)
*/


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> stn;
        for(auto s:tokens) {
            if(s.size()>1 || isdigit(s[0])) stn.push(stoi(s));
            else {
                auto x2=stn.top(); stn.pop();
                auto x1=stn.top(); stn.pop();
                switch(s[0]) {
                    case '+': x1+=x2; break;
                    case '-': x1-=x2; break;
                    case '*': x1*=x2; break;
                    case '/': x1/=x2; break;
                }
                stn.push(x1);
            }
        }
        return stn.top();
    }
};