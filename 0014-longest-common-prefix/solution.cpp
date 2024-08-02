class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        
        for(int i = 0; i < strs[0].length(); i++){
            for(auto& str : strs) {
                if(i >= str.length() || str[i] != strs[0][i]) {
                    return res;
                }
            }
        res += strs[0][i];
        }
        return res;
    }
};
