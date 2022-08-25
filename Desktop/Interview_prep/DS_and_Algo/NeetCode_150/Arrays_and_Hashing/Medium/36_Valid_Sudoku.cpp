/*
Link to problem - https://leetcode.com/problems/valid-sudoku/
Approach - Create sets for each row, column, & sub-box and then check for any duplicate numbers (Reference - https://leetcode.com/problems/valid-sudoku/discuss/1732158/C%2B%2B-Simple-Solution-Using-Set-oror-Easy-Explanation-with-comments-and-Notes)
Time complexity - O(n^2)
Space complexity - O(n^2)
*/

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        vector<set<int>> rows(9), cols(9), blocks(9);

        for (int r = 0; r < 9; r++)
            for (int c = 0; c < 9; c++)
                if (board[r][c] != '.')
                {
                    int num = board[r][c] - '0';
                    if (rows[r].find(num) != rows[r].end() or cols[c].find(num) != cols[c].end() or blocks[(r / 3) * 3 + c / 3].find(num) != blocks[(r / 3) * 3 + c / 3].end())
                        return false;

                    rows[r].insert(num);
                    cols[c].insert(num);
                    blocks[(r / 3) * 3 + c / 3].insert(num);
                }
        return true;
    }
};