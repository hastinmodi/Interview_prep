/*
Link to problem - https://leetcode.com/problems/largest-rectangle-in-histogram/
Approach - Create a monotonically increasing stack and keep track of the max area (Reference - https://www.youtube.com/watch?v=zx5Sw9130L0&ab_channel=NeetCode)
Time complexity - O(n)
Space complexity - O(n)
*/


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // pair: [index, height]
        stack<pair<int, int>> stk;
        int result = 0;
        
        for (int i = 0; i < heights.size(); i++) {
            int start = i;
            
            while (!stk.empty() && stk.top().second > heights[i]) {
                int index = stk.top().first;
                int width = i - index;
                int height = stk.top().second;
                stk.pop();
                
                result = max(result, height * width);
                start = index;
            }
            
            stk.push({start, heights[i]});
        }
        
        while (!stk.empty()) {
            int width = heights.size() - stk.top().first;
            int height = stk.top().second;
            stk.pop();
            
            result = max(result, height * width);
        }
                          
        return result;
    }
};