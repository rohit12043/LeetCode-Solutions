class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> current = {};
        backtrack(current, res, nums, 0);
        return res;
    }

    void backtrack(vector<int> &current, vector<vector<int>> &res, vector<int> &nums, int k){
        res.push_back(current);


        for(int i = k; i < nums.size(); i++){
            current.push_back(nums[i]);
            backtrack(current, res, nums, i + 1);
            current.pop_back();
        }
    }
};
