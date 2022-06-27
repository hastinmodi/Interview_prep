/*
Link to problem - https://leetcode.com/problems/product-of-array-except-self/
Approach - Maintain a prefix and postfix array containing the products of numbers and use it to fill up the outputs array (Reference - https://www.youtube.com/watch?v=bNvIQI2wAjk&ab_channel=NeetCode)
Time complexity -  O(n)
Space complexity - O(n)
*/

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> prefix(nums.size(), nums[0]);
        vector<int> postfix(nums.size(), nums[nums.size() - 1]);
        vector<int> output(nums.size(), 0);

        for (int i = 1; i < prefix.size(); i++)
            prefix[i] = prefix[i - 1] * nums[i];

        for (int i = postfix.size() - 2; i > 0; i--)
            postfix[i] = postfix[i + 1] * nums[i];

        output[0] = postfix[1];
        output[nums.size() - 1] = prefix[nums.size() - 2];
        for (int i = 1; i < output.size() - 1; i++)
        {
            output[i] = prefix[i - 1] * postfix[i + 1];
        }
        return output;
    }
};