/*
Link to problem - https://leetcode.com/problems/majority-element/
Approach - Boyer-Moore voting algorithm (Reference - approach 6 in https://leetcode.com/problems/majority-element/solution/)
Time complexity - O(n)
Space complexity - O(1)
*/

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int count = 0;
        int candidate = NULL;

        for (int i = 0; i < nums.size(); i++)
        {
            if (count == 0)
                candidate = nums[i];
            if (nums[i] == candidate)
                count += 1;
            else
                count -= 1;
        }
        return candidate;
    }
};