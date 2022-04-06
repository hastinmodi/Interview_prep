/*
Link to problem - https://leetcode.com/problems/maximum-subarray/
Approach - Iterate through every combination of subarray and find the maximum sum among those (Reference - https://leetcode.com/problems/maximum-subarray/discuss/1595195/C%2B%2BPython-7-Simple-Solutions-w-Explanation-or-Brute-Force-%2B-DP-%2B-Kadane-%2B-Divide-and-Conquer)
Time complexity - O(n^2)
Space complexity - O(1)
*/

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int len = nums.size();
        int ans = INT_MIN;

        for (int i = 0; i < len; i++)
        {
            for (int j = i, temp_sum = 0; j < len; j++)
            {
                temp_sum += nums[j];
                ans = max(ans, temp_sum);
            }
        }
        return ans;
    }
};