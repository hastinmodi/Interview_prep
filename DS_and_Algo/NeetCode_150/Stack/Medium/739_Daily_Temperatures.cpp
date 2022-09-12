/*
Link to problem - https://leetcode.com/problems/daily-temperatures/
Approach - Maintain a monotonically deccreasing stack (Reference - https://www.youtube.com/watch?v=cTBiBSnjO3c&ab_channel=NeetCode)
Time complexity - O(n)
Space complexity - O(n)
*/


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        
        // pair: [index, temp]
        stack<pair<int, int>> stk;
        vector<int> result(n);
        
        for (int i = 0; i < n; i++) {
            int currDay = i;
            int currTemp = temperatures[i];
            
            while (!stk.empty() && stk.top().second < currTemp) {
                int prevDay = stk.top().first;
                int prevTemp = stk.top().second;
                stk.pop();
                
                result[prevDay] = currDay - prevDay;
            }
            
            stk.push({currDay, currTemp});
        }
        
        return result;
    }
};