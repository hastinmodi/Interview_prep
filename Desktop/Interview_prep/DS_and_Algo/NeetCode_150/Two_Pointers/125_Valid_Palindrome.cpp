/*
Link to problem - https://leetcode.com/problems/valid-palindrome/
Approach - Iterate through the string using 2 pointers - from start and end and then compare their values (Reference -  https://www.youtube.com/watch?v=jJXJ16kPFWg)
Time complexity - O(n)
Space complexity - O(1)
*/


class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        
        while (i < j) {
            while (!isalnum(s[i]) && i < j) {
                i++;
            }
            while (!isalnum(s[j]) && i < j) {
                j--;
            }
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
};