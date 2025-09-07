class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // unordered_map<int, int> freq;
        vector<int> res;

        for(int i = 0; i < nums.size(); i++){

            int idx = abs(nums[i]) - 1;
            if(nums[idx] < 0){
                res.push_back(abs(nums[i]));
            }
            nums[idx] = -(nums[idx]);

        }
        // for(auto i: nums){
        //     freq[i]++;
        //     if(freq[i] == 2){
        //         res.push_back(i);
        //     }
        // }
        return res;
    }
};
