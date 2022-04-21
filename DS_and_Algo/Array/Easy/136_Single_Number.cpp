/*
Link to problem - https://leetcode.com/problems/single-number/submissions/
Approach - Take element-wise XOR and return the final result (Reference - method 3 in https://leetcode.com/problems/single-number/discuss/1771720/C%2B%2B-EASY-SOLUTIONS-(SORTING-XOR-MAPS-(OR-FREQUENCY-ARRAY)))
Time complexity - O(n)
Space complexity - O(1)
*/

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++)
            ans ^= nums[i];
        return ans;
    }
};