class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        string res;

        for(auto c : s){
            freq[c]++;
        }

        vector<vector<char>> buckets(s.size() + 1);

        for(auto [c, count]: freq){
            buckets[count].push_back(c);
        }

        for(int i = buckets.size() - 1; i >=1; i--){
            for(auto c: buckets[i]){
                res.append(i, c);
            }
        }
        // priority_queue<pair<int, char>> max_heap;

        // for(auto [c, count]: freq){
        //     max_heap.push({count, c});
        // }

        // while(!max_heap.empty()){
        //     auto [count, c] = max_heap.top();
        //     max_heap.pop();
        //     res.append(count, c);
        // }

        return res;
    }
};
