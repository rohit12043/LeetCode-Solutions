class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res = {};
        vector<int> current = {};

        std::sort(candidates.begin(), candidates.end()); 

        combination(res, candidates, current, 0, target);

        return res;
    }

    void combination(vector<vector<int>>& res, vector<int>& candidates, vector<int>& current, int start, int target){
        if(target == 0){
            res.push_back(current);
            return;
        }
        if(target < 0){
            return;
        }

        for(int i = start; i < candidates.size(); i++){
            if (candidates[i] > target) break;
            if (i > start && candidates[i] == candidates[i - 1]) continue;
            current.push_back(candidates[i]);
            combination(res, candidates, current, i+1, target - candidates[i]);
            current.pop_back();
        }
    }
};
