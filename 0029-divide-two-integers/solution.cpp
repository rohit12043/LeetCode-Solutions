class Solution {
public:
    int divide(int dividendi, int divisori) {
        if (dividendi == INT_MIN && divisori == -1) return INT_MAX;
        if(divisori == 1) return dividendi;

        int sign = (dividendi > 0) == (divisori > 0) ? 1 : -1, quotient = 0;
        long long dividend = abs((long long)dividendi);
        long long divisor = abs((long long)divisori);

        
        while(divisor <= dividend){
            int k = 1;
            long long tmp = divisor;
            while(dividend >= (tmp << 1)){
                tmp <<= 1;
                k <<= 1;
            }
            dividend -= tmp;
            quotient += k;
        }
        
        return  sign*quotient;
    }
};
