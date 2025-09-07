class Solution {
public:
    vector<vector<int>> res;
    vector<int> current;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        backtrack(nums, 0);
        return res;
    }

    void backtrack(vector<int> &nums, int k){
        res.push_back(current);

        for(int i = k; i < nums.size(); i++){
            if(i > k && nums[i] == nums[i - 1]) continue;

            current.push_back(nums[i]);
            backtrack(nums, i + 1);
            current.pop_back();
        }
    }
};
