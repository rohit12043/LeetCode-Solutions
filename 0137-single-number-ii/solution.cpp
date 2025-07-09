class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;

        for(int i = 0; i < 32; i++){
            int bitSum = 0;
            for(auto num: nums){
                if(num & (1 << i)){
                    bitSum++;
                }
            }
            if(bitSum % 3 != 0){
                res = res | (1 << i);
            }
        }
        return res;
    }
};
