/*
Link to problem - https://leetcode.com/problems/valid-anagram/
Approach - Sort the strings and then compare them
Time complexity - O(nlogn)
Space complexity - O(1) (not considering space for sorting)
*/

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};