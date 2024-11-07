class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != nums[j]){
                nums[j+1] = nums[i];
                j = j+1;
            }
        }
        return j+1;
    }
};
