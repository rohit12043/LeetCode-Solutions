class Solution {
public:
    bool isHappy(int n) {
        int res = 0, digit = 0;
        unordered_set<int> processed;
        while(n != 1){
            if(processed.count(n)) return false;
            processed.insert(n);
            int temp = n;
            res = 0;
            while(temp > 0){
                digit = temp % 10;
                res += (digit*digit);
                temp = temp/10;
            }
            n = res;

        }
        return true;
    }
};
