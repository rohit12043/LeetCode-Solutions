#include <string>

class Solution {
public:
    string countAndSay(int n) {
        string s = "1";

        for(int i = 2; i <= n; i++){
            string next = "";
            for(int j = 0; j < s.size(); ){
                int count = 0;
                char c = s[j];

                while(j < s.size() && s[j] == c){
                    count++;
                    j++;
                }

                next += std::to_string(count) + c;
            }
            s = next;
        }
        return s;
    }
};
