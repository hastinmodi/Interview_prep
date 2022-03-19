/*
Link to problem - https://leetcode.com/problems/two-sum/
Approach - Select one element in the array and iterate over the other elements to check if the sum is equal to target
Time complexity - O(n^2)
Space complexity - O(1)
*/

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans(2, NULL);
        if (size(nums) < 2)
            return ans;
        long int temp_sum;
        for (int i = 0; i < size(nums); i++)
        {
            temp_sum = nums[i];
            for (int j = i + 1; j < size(nums); j++)
            {
                if (temp_sum + nums[j] == target)
                {
                    ans[0] = i;
                    ans[1] = j;
                }
            }
        }
        return ans;
    }
};