class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> keypad = {
        {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
        {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
    };

    string current = "";
    vector<string> res;

    if(digits.length() == 0){
        return res;
    }
    backtrack(current, res, 0, digits, keypad);

    return res;   

    }

    void backtrack(string current, vector<string> &result, int index, string &digits, unordered_map<char, string> &keypad){
        if(index == digits.size()){
            result.push_back(current);
        }
        char digit = digits[index];

        for(char letter: keypad[digit]){
            backtrack(current + letter, result, index + 1, digits, keypad);
        }
    }
};
