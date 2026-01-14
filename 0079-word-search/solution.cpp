class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if(recurse(i, j, board, 0, word)) return true;
            }
        }
        return false;
    }

    bool recurse(int i, int j, vector<vector<char>>& board, int wordIdx, string &word){
        if(i < board.size() && j < board[0].size() && wordIdx == word.size() - 1 && word[wordIdx] == board[i][j]) return true;
        if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[wordIdx]) return false;
        char temp = board[i][j];
        board[i][j] = '!';
        if(recurse(i+1, j, board, wordIdx+1, word) || recurse(i-1, j, board, wordIdx+1, word) || recurse(i, j-1, board, wordIdx+1, word) || recurse(i, j+1, board, wordIdx+1, word)){
            board[i][j] = temp; 
            return true;
        }
        board[i][j] = temp;
        return false;
    }
};
