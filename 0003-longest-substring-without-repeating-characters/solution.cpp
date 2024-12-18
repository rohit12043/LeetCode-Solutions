class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int maxLen = 0;
        int begin = 0;
        unordered_map<char, int> characters;
        for(int i = 0; i < s.length(); i++){
            if (characters.find(s[i]) != characters.end()){
                begin = max(begin, characters[s[i]] + 1);
                
            }
                characters[s[i]] = i;
                maxLen = max(maxLen, (i - begin) + 1);
        }
        return maxLen;
    }
};
