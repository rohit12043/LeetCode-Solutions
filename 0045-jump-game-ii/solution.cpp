class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size() <= 1) return 0;
        int farthest = 0, jumps = 0, current_end = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            farthest = max(farthest, i + nums[i]);
            if(i == current_end){
                jumps += 1;
                current_end = farthest;
            }
        }
        return jumps;
    }
};
