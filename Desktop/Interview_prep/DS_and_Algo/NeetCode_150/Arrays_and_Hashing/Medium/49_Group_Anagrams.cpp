/*
Link to problem - https://leetcode.com/problems/group-anagrams/
Approach - Store the corresponding anagrams as values in a hash map with the key as the sorted anagram (Reference - https://leetcode.com/problems/group-anagrams/discuss/19200/C%2B%2B-unordered_map-and-counting-sort)
Time complexity - O(m*n)
Space complexity - O(m*n)
*/

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> anaMap;

        for (auto s : strs)
        {
            anaMap[strSort(s)].push_back(s);
        }

        for (auto a : anaMap)
        {
            ans.push_back(a.second);
        }
        return ans;
    }

private:
    string strSort(string s)
    {
        int count[26] = {0};

        for (auto c : s)
            count[c - 'a']++;

        string temp;

        for (int c = 0; c < 26; c++)
            temp += string(count[c], c + 'a');

        return temp;
    }
};