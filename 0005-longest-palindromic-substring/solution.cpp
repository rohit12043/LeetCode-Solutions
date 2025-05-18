class Solution {
public:

    string expand(string &s, int left, int right){

        while(left >= 0 && right < s.length() && s[left] == s[right]){
            left--;
            right++;
        }
        return s.substr(left+1, right-left-1);

    }
    string longestPalindrome(string s) {

        string best = "";
        string odd = "";
        string even = "";

        for(int i = 0; i <= s.length()-1; i++){
                int left = i;
                int right = i+1;

                odd = expand(s, i, i);
                even = expand(s, i, i + 1);

                if(odd.length() > best.length()) best = odd;
                if(even.length() > best.length()) best = even;
        }
        return best;
    }
};
