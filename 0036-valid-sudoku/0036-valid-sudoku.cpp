class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> boxes(9);

        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                char value = board[i][j];

                if(value == '.')
                {
                    continue;
                }

                int boxId = (i / 3) * 3 + (j / 3);

                if(rows[i].count(value))
                {
                    return false;
                }
                rows[i].insert(value);

                if(cols[j].count(value))
                {
                    return false;
                }
                cols[j].insert(value);

                if(boxes[boxId].count(value))
                {
                    return false;
                }
                boxes[boxId].insert(value);
            }
        }
        return true;
    }
};