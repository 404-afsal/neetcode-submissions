class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> rows(board.size(), vector<bool>(10, false));
        vector<vector<bool>> cols(board.size(), vector<bool>(10, false));
        vector<vector<bool>> boxes(board.size(), vector<bool>(10, false));

        for (int r = 0; r < (int)board.size(); r++)
        {
            for (int c = 0; c < (int)board[r].size(); c++)
            {
                if (board[r][c] != '.')
                {
                    int digit = board[r][c] - '0';
                    int b = (r/3) * 3 + (c/3);

                    if (rows[r][digit] || cols[c][digit] || boxes[b][digit])
                    {
                        return false;
                    }
                    else
                    {
                        rows[r][digit] = true;
                        cols[c][digit] = true;
                        boxes[b][digit] = true;
                    }
                }
            }
        }
        return true;
    }
};
