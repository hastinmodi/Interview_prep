/*
Link to problem - https://leetcode.com/problems/longest-consecutive-sequence/
Approach - Store all the numbers in a set and check for the sequence in it by searching for n+1 in the set, only if n-1 is not already present in the set (Reference - https://leetcode.com/problems/longest-consecutive-sequence/solution/)
Time complexity - O(n)
Space complexity - O(n)
*/

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> allNums;

        for (auto num : nums)
            allNums.insert(num);

        int longestStreak = 0;

        for (auto num : allNums)
        {
            if (allNums.find(num - 1) == allNums.end())
            {
                int currentNum = num;
                int currentStreak = 1;

                while (allNums.find(currentNum + 1) != allNums.end())
                {
                    currentNum += 1;
                    currentStreak += 1;
                }

                longestStreak = max(longestStreak, currentStreak);
            }
        }
        return longestStreak;
    }
};