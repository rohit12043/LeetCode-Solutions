class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size() < 3) return 0;
        sort(nums.begin(), nums.end());

        int closest = nums[0] + nums[1] + nums[2], sum;
        for(int i = 0; i < nums.size() - 2; i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            int left = i+1, right = nums.size()-1;
            
            while(left < right){
                sum = nums[i] + nums[left] + nums[right];
                if(sum == target) return sum;
                if(abs(target - sum) < abs(target - closest)){
                    closest = sum;
                }

                if(sum < target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return closest;
    }
};
