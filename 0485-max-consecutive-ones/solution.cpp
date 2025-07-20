class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximum = 0, temp = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                temp++;
            }
            else{
                temp = 0;
            }

            maximum = max(maximum, temp);
        }
        return maximum;
    }
};
