/*
Link to problem - https://leetcode.com/problems/valid-parentheses/
Approach - Check for the pairs of brackets
Time complexity - O(n)
Space complexity - O(n)
*/


class Solution {
public:
    bool isValid(string s) {
        stack<char> par;
        
        for(int i = 0; i < s.size(); i++){
            
            if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
                if(par.empty()) return false;
            
                if(s[i] == ')' && par.top() != '(') return false;
            
                if(s[i] == ']' && par.top() != '[') return false;
            
                if(s[i] == '}' && par.top() != '{') return false;
            
                par.pop();
            }
            else{
                par.push(s[i]);
            }
        }
        
        return par.empty();
    }
};