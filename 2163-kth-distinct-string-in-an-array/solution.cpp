class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
    
        unordered_map<string, int> freq = {};
        for(auto&str: arr){
            freq[str] += 1;
        }

        int count = 0;
        for(auto&str: arr){
            if(freq[str] == 1){
                ++count;
                if(count == k){
                    return str;
                }
            }
        }
    return "";
    }
};
