/*
Link to problem - https://leetcode.com/problems/contains-duplicate/
Approach - Sort the array and then compare adjacent values
Time complexity - O(nlogn)
Space complexity - O(1) (not considering space of sorting alg.)
*/

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
                return true;
        }
        return false;
    }
};