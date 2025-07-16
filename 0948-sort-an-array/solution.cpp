class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }

    void quickSort(vector<int> &nums, int left, int right){
        if(left >= right) return;

        int x = left + rand() % (right - left + 1);
        swap(nums[x], nums[right]);

        x = nums[right];

        int i = left - 1, j;

        for(j = left; j < right; j++){
            if(nums[j] < x){
                i++;
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
        i++;
        int temp = nums[i];
        nums[i] = nums[right];
        nums[right] = temp;

        quickSort(nums, left, i - 1);
        quickSort(nums, i + 1 , right);
    }
};
