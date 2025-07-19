class Solution {
public:
    string stringHash(string s, int k) {
        int res = 0;
        int m = s.size()/k;
        string result = "";
        for (int i = 0; i < m; i++) {
            res = 0;
            for (int j = 0; j < k; j++)
                res += s[j + k*i] - 'a';

            result += (res % 26) + 'a';
        }
        return result;
    }
};
