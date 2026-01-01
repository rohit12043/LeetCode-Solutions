class Solution {
public:
    void reverse(vector<int>& nums, int left, int right){
        if(nums.size() == 0 || nums.size() == 1) return;
        while(left < right){
            int temp = nums[right];
            nums[right] = nums[left];
            nums[left] = temp;
            left++; right--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        int left = 0, right = nums.size() - 1;
        reverse(nums, left, right);
        left = 0; right = k - 1;
        reverse(nums, left, right);
        left = k; right = nums.size() - 1;
        reverse(nums, left, right);
    }
};
