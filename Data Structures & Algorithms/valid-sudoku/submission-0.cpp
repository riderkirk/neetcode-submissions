class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows, cols;
        map<pair<int, int>, unordered_set<char>> squares;
        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                char current = board[r][c];
                if (current == '.') continue;

                pair<int,int> square = {r / 3, c / 3};

                if (rows[r].count(current) || 
                    cols[c].count(current) || 
                    squares[square].count(current)) {
                    return false;
                }

                rows[r].insert(current);
                cols[c].insert(current);
                squares[square].insert(current);
            }
        }
        return true;
    }
};
