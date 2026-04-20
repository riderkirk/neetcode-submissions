#include <array>

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        array<bitset<9>, 9> rows{0};
        array<bitset<9>, 9> cols{0};
        array<bitset<9>, 9> squares{0};
        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                char current = board[r][c];
                if (current == '.') continue;

                int val = current - '1';

                int s = (r / 3) * 3 + (c / 3);

                bitset<9> cmp = 1 << val;
                if ((rows[r] & (cmp)).any() || 
                    (cols[c] & (cmp)).any() || 
                    (squares[s] & (cmp)).any()) {
                    return false;
                }

                rows[r] |= cmp;
                cols[c] |= cmp;
                squares[s] |= cmp;
            }
        }
        return true;
    }
};
