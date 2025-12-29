class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> map;

        for(int i : nums){
            map.insert(i);
        }

        int longest = 0;

        for(int i : map){
            if(map.find(i-1) == map.end()){
                int curr = i;
                int len = 1;


                while(map.find(curr+1) != map.end()){
                    curr++;
                    len++;
                }

                longest = max(longest, len);
            }
        }
        return longest;
    }
};
