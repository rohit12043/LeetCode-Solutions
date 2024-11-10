class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;

        for(int i = s.size() - 1; i > -1; i--){
            if (s[i] == ' '){
                if(count != 0){
                    break;
                }
            }
            else{
                ++count;
        }
        }
        return count;
    }
};
