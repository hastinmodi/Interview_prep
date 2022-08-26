/*
Link to problem - https://leetcode.com/problems/longest-repeating-character-replacement/
Approach - Maintain 2 pointers and an array which contains the count of all the alphabets in the current window, increment/decrement the window size based on the max count and the number of replacements allowed (Reference - https://www.youtube.com/watch?v=gqXU1UyA8pk)
Time complexity - O(n)
Space complexity - O(1)
*/


class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26);
        int maxCount = 0;
        
        int i = 0;
        int j = 0;
        
        int result = 0;
        
        while (j < s.size()) {
            count[s[j] - 'A']++;
            maxCount = max(maxCount, count[s[j] - 'A']);
            if (j - i + 1 - maxCount > k) {
                count[s[i] - 'A']--;
                i++;
            }
            result = max(result, j - i + 1);
            j++;
        }
        
        return result;
    }
};