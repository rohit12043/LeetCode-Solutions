class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;
        backtrack(candidates, target, current, 0);
        return result;
    }

    void backtrack(vector<int>& candidates, int remaining, vector<int>& current, int start){
            if(remaining == 0){
                result.push_back(current);
                return;
            }
            if(remaining < 0) return;

            for(int i = start; i < candidates.size(); i++){
                current.push_back(candidates[i]);
                backtrack(candidates, remaining - candidates[i], current, i);
                current.pop_back();
            }
    }
};
