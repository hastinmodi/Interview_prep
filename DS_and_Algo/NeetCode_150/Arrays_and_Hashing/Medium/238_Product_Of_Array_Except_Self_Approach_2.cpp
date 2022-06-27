/*
Link to problem - https://leetcode.com/problems/product-of-array-except-self/
Approach - Remove the prefix and postfix arrays used in approach 1 and calculate the outputs directly in the output array (Reference - https://www.youtube.com/watch?v=bNvIQI2wAjk&ab_channel=NeetCode)
Time complexity - O(n)
Space complexity - O(1)
*/

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> output(nums.size(), 0);

        output[0] = 1;
        for (int i = 0; i < output.size() - 1; i++)
            output[i + 1] = output[i] * nums[i];

        int postfix = nums[nums.size() - 1];
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            output[i] *= postfix;
            postfix *= nums[i];
        }
        return output;
    }
};