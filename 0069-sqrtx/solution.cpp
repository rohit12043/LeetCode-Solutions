class Solution {
public:
    float mySqrt(int x) {
        float high = x, low = 1;
        long long mid = (high + low)/2;

        if (x == 1 || x == 0){
            return x;
        }

        while (low <= high) {
            mid = low + (high - low) / 2;
            long long sqr = (long long)mid * mid; 

            if (sqr == x) {
                return mid;
            } else if (sqr < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return high;
    }
};
