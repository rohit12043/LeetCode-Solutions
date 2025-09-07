class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> current;
        vector<bool> used(nums.size(), false);
        backtrack(nums, used, current, res);

        return res;
    }

    void backtrack(vector<int>& nums, vector<bool>& used, vector<int>& current, vector<vector<int>>& res){
        if(current.size() == nums.size()){
            res.push_back(current);
            return;
        }

        for(int i = 0; i < nums.size(); i++){
            if(used[i] == true) continue;
            current.push_back(nums[i]);
            used[i] = true;
            backtrack(nums, used, current, res);
            current.pop_back();
            used[i] = false;
        }
    }
};
