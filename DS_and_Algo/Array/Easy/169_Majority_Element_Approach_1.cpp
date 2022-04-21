/*
Link to problem - https://leetcode.com/problems/majority-element/
Approach - Sort the array and return the mid element (Reference - approach 3 in https://leetcode.com/problems/majority-element/solution/)
Time complexity - O(nlogn)
Space complexity - O(1)
*/

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};