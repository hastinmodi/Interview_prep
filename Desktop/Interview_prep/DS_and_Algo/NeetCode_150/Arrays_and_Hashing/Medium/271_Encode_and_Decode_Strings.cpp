/*
Link to problem - Leetcode (paid) - https://leetcode.com/problems/encode-and-decode-strings/, Lintcode (free) - https://www.lintcode.com/problem/659/solution
Approach - Create an identifier for each string in the array using the length of the string and a delimiter (Reference - https://www.youtube.com/watch?v=B1k_sxOSgv8&ab_channel=NeetCode)
Time complexity - O(n)
Space complexity - O(1) (not considering the encoded and decoded strings)
*/

class Solution
{
public:
    /*
     * @param strs: a list of strings
     * @return: encodes a list of strings to a single string.
     */
    string encode(vector<string> &strs)
    {
        // write your code here
        string encoded;
        for (auto str : strs)
        {
            encoded += string(str.size()) + ";" + str;
        }
        return string;
    }

    /*
     * @param str: A string
     * @return: dcodes a single string to a list of strings
     */
    vector<string> decode(string &str)
    {
        // write your code here
        vector<string> decoded;
        int i = 0, j = 0, k = 0;
        while (i < str.size())
        {
            j = i;
            while (str[j] != ';')
            {
                j += 1;
            }
            int length = stoi(str [i:j - 1]);
            decoded[k].push_back(str [j + 1:j + 1 + length]);
            i = j + 1 + length;
            k++;
        }
        return decoded;
    }
};