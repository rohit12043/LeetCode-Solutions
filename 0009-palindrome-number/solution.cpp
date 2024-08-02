class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int reversed = 0, temp = 0;
        temp = x;

        if(x < 0) return false;

        while(x > 0){
            reversed = reversed * 10 + (x % 10);
            x /= 10;
        }
        if (reversed == temp){
            return true;
        }
    return false;
    }
};
