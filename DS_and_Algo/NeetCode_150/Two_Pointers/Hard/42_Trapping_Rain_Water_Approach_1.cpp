/*
Link to problem - https://leetcode.com/problems/trapping-rain-water/
Approach - The amount of water stored at a particular index is dependent on the max height of bars on either side of it, keep storing the max heights on either side in 2 arrays (Reference - Approach 2 in https://leetcode.com/problems/trapping-rain-water/solution/)
Time complexity - O(n)
Space complexity - O(n)
*/


class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()) return 0;
        
        int ans = 0;
        int size = height.size();
        
        vector<int> left_max(size), right_max(size);
        
        left_max[0] = height[0];
        
        for (int i = 1; i < size; i++) {
            left_max[i] = max(height[i], left_max[i - 1]);
        }
        
        right_max[size - 1] = height[size - 1];
        
        for (int i = size - 2; i >= 0; i--) {
            right_max[i] = max(height[i], right_max[i + 1]);
        }
        
        for (int i = 1; i < size - 1; i++) {
            ans += min(left_max[i], right_max[i]) - height[i];
        }
        
        return ans;
    }
};