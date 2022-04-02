/*
Link to problem - https://leetcode.com/problems/search-insert-position/
Approach - Perform binary search and return the lower element (Reference - https://leetcode.com/problems/search-insert-position/discuss/15101/C%2B%2B-O(logn)-Binary-Search-that-handles-duplicate)
Time complexity - O(log n)
Space complexity - O(1)
*/

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        if (nums.size() == 1)
        {
            if (target == nums[0] || target < nums[0] || nums.empty())
                return 0;
            else
                return 1;
        }

        int len = nums.size();
        int start = 0;
        int end = len - 1;
        int mid = start + (end - start) / 2;

        while (end >= start)
        {
            mid = start + (end - start) / 2;
            if (target == nums[mid])
                return mid;
            else if (target > nums[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }
        return start;
    }
};