class Solution {
public:
    int myAtoi(string s) {
        int num = 0, i = 0;
        bool neg = false;
        int n = s.length();
    
        for(; i < n && s[i] == ' '; i++);

        if(i < n && (s[i] == '-' || s[i] == '+')){
            neg = (s[i] == '-');
            i++;
        }

        while(i < n && s[i] >= '0' && s[i] <= '9'){
            int digit = s[i] - '0';

            if(num > (INT_MAX - digit) / 10){
                return neg ? INT_MIN : INT_MAX;
            }

            num = (num*10) + digit;
            i++;
        }


        return neg? num * -1: num;
    }
};
