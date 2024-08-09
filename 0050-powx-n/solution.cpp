class Solution {
public:
    double myPow(double x, int n) {
        double result = 1;
       unsigned int exp = n;

        if(n==0) return 1;
        if(x==1) return 1;

        if (n<0){
            x = 1/x;
            exp = -exp;
        }

        while(exp > 0){
            if((exp % 2) != 0){
                result *= x;
            }
            x = x*x;
            exp = exp/2;
        }
        return result;
    }
};
