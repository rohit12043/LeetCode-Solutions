class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string> result = {};

        backtrack(n, "", result);
        return result;
    }

    void backtrack(int n, string str, vector<string> &result){
        if(str.length() == n){
            result.push_back(str);
            return;
        }
        backtrack(n, str+'1', result);
        if(str.empty() || str.back() != '0' ){
            backtrack(n, str+'0', result);
        }
    }
};
