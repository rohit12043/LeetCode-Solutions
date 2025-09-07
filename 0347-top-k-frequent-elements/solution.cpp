class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> res;

        for(auto &i : nums){
            freq[i]++;
        }

        priority_queue<pair<int, int>> max_heap;

        for(auto [num, count]: freq){
            max_heap.push({count, num});
        }

        while(!max_heap.empty() && k > 0){
            auto [count, num] = max_heap.top();
            max_heap.pop();
            res.push_back(num);
            k--;
        }
        return res;
    }
};
