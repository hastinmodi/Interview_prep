/*
Link to problem - https://leetcode.com/problems/longest-substring-without-repeating-characters/
Approach - Keep iterating through the characters while storing them in a set and increase/decrease the size of the sliding window based on duplicates (Reference - https://www.youtube.com/watch?v=wiGpQwVHdE0)
Time complexity - O(n)
Space complexity - O(n)
*/


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0, result = 0;
        unordered_set<char> letters;
        
        while(j < s.size()){
            if (letters.find(s[j]) == letters.end()) {
                letters.insert(s[j]);
                result = max(result, j - i + 1);
                j++;
            } 
            else {
                letters.erase(s[i]);
                i++;
            }
        }
        return result;
    }
};