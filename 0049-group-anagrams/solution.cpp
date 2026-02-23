class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mapping;
        for(string word: strs){
            vector<int> freq(26, 0);

            for(char ch: word){
                freq[ch - 'a'] += 1;
            }
            string key;
            for(int i = 0; i < 26; i++){
                key += to_string(freq[i]) + "#";
            }
            mapping[key].push_back(word);
        }
        vector<vector<string>> results;
        for(auto pair: mapping){
            results.push_back(pair.second);
        }
        return results;
    }
};
