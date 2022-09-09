/*
Link to problem - 
Approach - Keep count of opening and closing brackets and add brackets accordingly (Reference - https://www.youtube.com/watch?v=s9fokUqJ76A&ab_channel=NeetCode)
Time complexity - O(2^n)
Space complexity - O(n)
*/


class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate(n, 0, 0, "", result);
        return result;
    }
private:
    void generate(int n, int open, int close, string str, vector<string>& result) {
        if (open == n && close == n) {
            result.push_back(str);
            return;
        }
        if (open < n) {
            generate(n, open + 1, close, str + '(', result);
        }
        if (open > close) {
            generate(n, open, close + 1, str + ')', result);
        }
    }
};