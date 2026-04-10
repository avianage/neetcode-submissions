class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        unordered_set<string> r;
        unordered_set<string> c;
        unordered_set<string> b;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (board[i][j] == '.'){
                    continue;
                }
                string row = "row"+ to_string(i) + "has" + to_string(board[i][j]);
                string col = "col"+ to_string(j) + "has" + to_string(board[i][j]);
                string box = "box"+ to_string((i/3)*3+(j/3)) + "has" + to_string(board[i][j]);
                bool test1 = r.insert(row).second;
                bool test2 = c.insert(col).second;
                bool test3 = b.insert(box).second;
                
                if (!test1 || !test2 || !test3){
                    return false;
                }
            }
        }
        return true;

    }
};
