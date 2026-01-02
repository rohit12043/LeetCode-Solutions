class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;

        for(int i = 0; i <= nums.size() - 1; i++){
           int elem = abs(nums[i]);

           if(nums[elem] < 0){
            return elem;
           }
           else{
            nums[elem] = -nums[elem];
           }
        }
        return -1;
    }
};
