/*
Link to problem - https://leetcode.com/problems/top-k-frequent-elements/
Approach - Create buckets of numbers which are grouped acc. to their frequency and then find the top k most frequent elements from the bucket (Reference - https://leetcode.com/problems/top-k-frequent-elements/discuss/81602/Java-O(n)-Solution-Bucket-Sort)
Time complexity - O(n)
Space complexity - O(n)
*/

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<vector<int>> buckets(nums.size() + 1);
        unordered_map<int, int> counter;
        vector<int> ans;

        for (auto num : nums)
            counter[num]++;

        for (auto ind : counter)
            buckets[ind.second].push_back(ind.first);

        for (int i = nums.size(); i >= 0 && ans.size() < k; i--)
        {
            if (!buckets[i].empty())
            {
                ans.insert(ans.end(), buckets[i].begin(), buckets[i].end());
            }
        }
        return ans;
    }
};