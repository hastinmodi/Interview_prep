/*
Link to problem - https://leetcode.com/problems/trapping-rain-water/
Approach - The amount of water stored at a particular index is dependent on the max height of bars on either side of it, keep storing the max heights on either side in 2 arrays (Reference - Approach 4 in https://leetcode.com/problems/trapping-rain-water/solution/)
Time complexity - O(n)
Space complexity - O(1)
*/


class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int ans = 0;
        int left_max = 0, right_max = 0;
        while (left < right) {
            if (height[left] < height[right]) {
                height[left] >= left_max ? (left_max = height[left]) : ans += (left_max - height[left]);
                ++left;
            }
            else {
                height[right] >= right_max ? (right_max = height[right]) : ans += (right_max - height[right]);
                --right;
            }
        }
        return ans;
    }
};