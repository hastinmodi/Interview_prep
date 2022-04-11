/*
Link to problem - https://leetcode.com/problems/maximum-subarray/
Approach - (Divide & conquer) Divide the array into left and right halves and find the maximum subarray from either half or from some entries in the left and right half along with the mid element (Reference - (Solution 6) https://leetcode.com/problems/maximum-subarray/discuss/1595195/C%2B%2BPython-7-Simple-Solutions-w-Explanation-or-Brute-Force-%2B-DP-%2B-Kadane-%2B-Divide-and-Conquer)
Time complexity - O(nlogn) (Master theorem)
Space complexity - O(logn)
*/

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        return sol(nums, 0, nums.size() - 1);
    }

    int sol(vector<int> &A, int L, int R)
    {
        if (L > R)
            return INT_MIN;
        int mid = L + (R - L) / 2, leftSum = 0, rightSum = 0;

        for (int i = mid - 1, curSum = 0; i >= L; i--)
            curSum += A[i],
                leftSum = max(leftSum, curSum);

        for (int i = mid + 1, curSum = 0; i <= R; i++)
            curSum += A[i],
                rightSum = max(rightSum, curSum);

        return max({sol(A, L, mid - 1), sol(A, mid + 1, R), leftSum + A[mid] + rightSum});
    }
};