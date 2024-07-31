class Solution {
public:
    int romanToInt(string s) {
    unordered_map<char, int> weight = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    int result = 0;

    for(int i = 0; i < s.length(); ++i){
        if((weight[s[i]]<weight[s[i+1]])){
            result -= weight[s[i]];
        }
        else{
            result += weight[s[i]];
        }
    }
    return result;
    }
};
