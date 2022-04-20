/*
Link to problem - https://leetcode.com/problems/pascals-triangle/submissions/
Approach - Fill in the first 2 rows manually and then fill in the further rows by creating a formula using the pattern
Time complexity - O(numRows*numRows)
Space complexity - O(numRows*numRows)
*/

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> sol;
        if (numRows == 0)
            return sol;

        for (int i = 0; i < numRows; i++)
        {
            vector<int> temp(i + 1, 0);
            temp[0] = 1;
            temp[i] = 1;
            for (int j = 1; j < i; j++)
            {
                temp[j] = sol[i - 1][j - 1] + sol[i - 1][j];
            }
            sol.push_back(temp);
        }
        return sol;
    }
};