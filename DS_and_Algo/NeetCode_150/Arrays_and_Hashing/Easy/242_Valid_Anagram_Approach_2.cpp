/*
Link to problem - https://leetcode.com/problems/valid-anagram/
Approach - Count the occurences of all characters (Add for first string and subtract for second string) (reference - https://leetcode.com/problems/valid-anagram/discuss/66519/2-C%2B%2B-Solutions-with-Explanations)
Time complexity - O(n)
Space complexity - O(1)
*/

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;

        int counts[26] = {0};

        for (int i = 0; i < s.size(); i++)
        {
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (counts[i])
                return false;
        }
        return true;
    }
};