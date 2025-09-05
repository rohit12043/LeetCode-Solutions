class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> current;

        backtrack(res, current, n, 1, k);
        return res;
    }

    void backtrack(vector<vector<int>> &res, vector<int> &current, int sum, int start, int k){
        if(sum < 0 || k < 0) return;
        if(k == 0 && sum == 0){
            res.push_back(current);
            return;
        }

        for(int i = start; i <= 9; i++){
            current.push_back(i);
            backtrack(res, current, sum - i, i + 1, k - 1);
            current.pop_back();
        }
    }
};
