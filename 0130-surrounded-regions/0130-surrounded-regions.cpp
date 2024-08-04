class Solution {
public:
    void visited_mark(vector<vector<char>>& board, vector<vector<int>>& vis, int i, int j, int row, int col) {
        if (j < 0 || i < 0 || i >= col || j >= row || board[j][i] == 'X' || vis[j][i] == 1) {
            return;
        }
        vis[j][i] = 1;
        visited_mark(board, vis, i + 1, j, row, col);
        visited_mark(board, vis, i - 1, j, row, col);
        visited_mark(board, vis, i, j - 1, row, col);
        visited_mark(board, vis, i, j + 1, row, col);
    }

    void solve(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();
        vector<vector<int>> vis(row, vector<int>(col, 0));


        for (int i = 0; i < col; i++) {
            if (board[0][i] == 'O') {
                visited_mark(board, vis, i, 0, row, col);
            }
            if (board[row - 1][i] == 'O') {
                visited_mark(board, vis, i, row - 1, row, col);
            }
        }
        for (int j = 0; j < row; j++) {
            if (board[j][0] == 'O') {
                visited_mark(board, vis, 0, j, row, col);
            }
            if (board[j][col - 1] == 'O') {
                visited_mark(board, vis, col - 1, j, row, col);
            }
        }

    
        for (int j = 0; j < row; j++) {
            for (int i = 0; i < col; i++) {
                if (board[j][i] == 'O' && vis[j][i] != 1) {
                    board[j][i] = 'X';
                }
            }
        }
    }
};
