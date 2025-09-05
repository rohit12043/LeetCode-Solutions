class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(curr, res, 1, n, k);
        return res;
    }

    void backtrack(vector<int> &current, vector<vector<int>> &res, int start, int n, int k){
        if(k == 0){
            res.push_back(current);
            return;
        }

        for(int i = start; i <= n - k + 1; i++){
            current.push_back(i);
            backtrack(current, res, i+1, n, k - 1);
            current.pop_back();
        }
    }
};
