class Solution {
public:

    void possibleParenthesis(string current, int open, int close, int n, vector<string> &res){
        if(current.size() == 2*n){
            res.push_back(current);
            return;
        }
        if (open < n) possibleParenthesis(current + "(", open + 1, close, n,  res);
        if (close < open) possibleParenthesis(current + ")", open, close + 1, n, res);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;

        possibleParenthesis("", 0, 0, n, res);

        return res;
    }
};
