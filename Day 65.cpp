//N queens
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>> board(n, vector<int>(n, 0));
        vector<vector<string>> ans;
        solve(0, ans, board, n);
        return ans;
    }

    void addSolution(vector<vector<string>> &ans, vector<vector<int>> &board, int n) {
        vector<string> temp;
        for (int i = 0; i < n; i++) {
            string row;
            for (int j = 0; j < n; j++) {
                row += (board[i][j] == 1) ? 'Q' : '.';
            }
            temp.push_back(row);
        }
        ans.push_back(temp);
    }

    bool isSafe(int row, int col, vector<vector<int>> &board, int n) {
        // Check for the same column
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 1) {
                return false;
            }
        }

        // Check for the left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 1) {
                return false;
            }
        }

        // Check for the right diagonal
        for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 1) {
                return false;
            }
        }

        return true;
    }

    void solve(int row, vector<vector<string>> &ans, vector<vector<int>> &board, int n) {
        if (row == n) {
            addSolution(ans, board, n);
            return;
        }

        for (int col = 0; col < n; col++) {
            if (isSafe(row, col, board, n)) {
                board[row][col] = 1;
                solve(row + 1, ans, board, n);
                // Backtrack
                board[row][col] = 0;
            }
        }
    }
};
