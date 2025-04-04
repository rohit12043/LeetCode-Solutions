class Solution {
public:
    int countVowelStrings(int n) {
        return count(n, 0);
    }

private:
    int dp[51][6]; 

    int count(int n, int vowelIndex) {
        if (n == 0) return 1;
        if (dp[n][vowelIndex] != 0) return dp[n][vowelIndex];

        int total = 0;
        for (int i = vowelIndex; i < 5; ++i) {
            total += count(n - 1, i);
        }

        dp[n][vowelIndex] = total;
        return total;
    }
};
