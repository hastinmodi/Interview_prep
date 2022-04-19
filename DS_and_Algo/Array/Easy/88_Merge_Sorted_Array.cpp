/*
Link to problem - https://leetcode.com/problems/merge-sorted-array/
Approach - Start from the end of both the arrays and keep on adding numbers as per their magnitude (Reference - https://leetcode.com/problems/merge-sorted-array/discuss/29522/This-is-my-AC-code-may-help-you)
Time complexity - O(m + n)
Space complexity - O(m + n)
*/

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1, j = n - 1, k = m + n - 1;
        while (i >= 0 and j >= 0)
        {
            if (nums1[i] < nums2[j])
            {
                nums1[k--] = nums2[j--];
            }
            else
            {
                nums1[k--] = nums1[i--];
            }
        }
        while (j >= 0)
        {
            nums1[k--] = nums2[j--];
        }
    }
};