class Solution {
public:
    int findLHS(vector<int>& nums) {
        if (nums.size() < 2) return 0;
        unordered_map<int, int> freq;
        int len = 0;

       for(int i: nums){
        freq[i]++;
       }

       for(auto &p : freq){
        int first = p.first;
        auto it = freq.find(first + 1);
        if (it != freq.end()) {
            len = max(len, p.second + it->second);
        }
       }
       return len;
    }
};
