/*
Link to problem - https://leetcode.com/problems/remove-duplicates-from-sorted-array/
Approach - Keep a counter of duplicate numbers and then once the next new number occurs in the array, shift it to the position of the first occurence of the duplicate of the previous number (Reference - https://leetcode.com/problems/remove-duplicates-from-sorted-array/discuss/11782/Share-my-clean-C%2B%2B-code)
Time complexity - O(n)
Space complexity - O(1)
*/

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int len = nums.size();
        int num_dup = 0;
        for (int i = 1; i < len; i++)
        {
            if (nums[i] == nums[i - 1])
                num_dup++;
            else
                nums[i - num_dup] = nums[i];
        }
        return len - num_dup;
    }
};