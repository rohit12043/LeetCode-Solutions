class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int> left, right, equal;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < pivot){
                left.push_back(nums[i]);
            }
            else if(nums[i] == pivot){
                equal.push_back(nums[i]);
            }
            else {
                right.push_back(nums[i]);
            }
        }
        
        int le = left.size() + equal.size();
        int l = left.size();
        for(int i = 0; i < left.size(); i++){
            nums[i] = left[i];
        }
        for(int i = 0; i < equal.size(); i++){
            nums[i + l] = equal[i];
        }
        for(int i = 0; i < right.size(); i++){
            nums[i + le] = right[i];
        }
        return nums;
    }
};
