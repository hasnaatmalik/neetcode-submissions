class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9] = {};
        bool col[9][9] = {};
        bool box[9][9] = {};

        for(int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    continue;
                }
                int number = board[i][j] - '1';
                int k = i / 3 * 3 + j / 3;
                if(row[i][number] || col[j][number] || box[k][number]) {
                    return false;
                }

                row[i][number] = true;
                col[j][number] = true;
                box[k][number] = true;
            }
        }
        return true;
    }
};
