/*
Link to problem - https://leetcode.com/problems/contains-duplicate/
Approach - Push values of the array in a set by iterating through it and keep checking for duplicates
Time complexity - O(n)
Space complexity - O(n)
*/

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> conDup;
        for (int num : nums)
        {
            if (conDup.find(num) != conDup.end())
                return true;
            else
                conDup.insert(num);
        }
        return false;
    }
};