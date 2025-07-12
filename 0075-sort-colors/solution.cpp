class Solution {
public:
    void sortColors(vector<int>& nums) {

        for(int i = 0; i < nums.size(); i++){
            int smallest = findSmallest(nums, i);
            if(nums[i] > nums[smallest]){
                int temp = nums[i];
                nums[i] = nums[smallest];
                nums[smallest] = temp;
            }
        }
    }

        int findSmallest(vector<int> &arr, int Idx){
            int smallest = 3, smallIdx;
            for(int i = Idx; i < arr.size(); i++){
                if(arr[i] < smallest){
                    smallest = arr[i];
                    smallIdx = i;
                }
            }
            return smallIdx;
        }
};
