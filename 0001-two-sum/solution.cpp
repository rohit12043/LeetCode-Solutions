class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> indexing;

        int size1 = nums.size();

        for(int i = 0; i<size1; i++){
            int complement = target-nums[i];
            if(indexing.find(complement) != indexing.end()){
                result.push_back(indexing[complement]);
                result.push_back(i);
                }
            indexing[nums[i]] = i;
        }
        return result;
    }
};
