class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findIndex(nums, target, true);
        int last = findIndex(nums, target, false);
        
        return {first, last};
    }

    int findIndex(vector<int>& nums, int target, bool firstIndex){
        int left = 0, right = nums.size() - 1;
        int mid, res = -1;

        while(left <= right){
            mid = left + (right - left) / 2;

            if(nums[mid] == target){
                res = mid;
                if(firstIndex){
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                }
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return res;
    }
};
