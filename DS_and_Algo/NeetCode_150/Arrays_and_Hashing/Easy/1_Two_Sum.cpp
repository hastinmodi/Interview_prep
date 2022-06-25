/*
Link to problem - https://leetcode.com/problems/two-sum/
Approach - Store the number and index in a map and iterate through elements while searching for target-element (reference - https://leetcode.com/problems/two-sum/discuss/13/Accepted-C%2B%2B-O(n)-Solution)
Time complexity - O(n)
Space complexity - O(n)
*/

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        if (size(nums) < 2)
            return ans;

        unordered_map<int, int> hash;
        long int temp_sum;
        for (int i = 0; i < nums.size(); i++)
        {
            temp_sum = target - nums[i];

            if (hash.find(temp_sum) != hash.end())
            {
                ans.push_back(hash[temp_sum]);
                ans.push_back(i);
                return ans;
            }
            hash[nums[i]] = i;
        }
        return ans;
    }
};