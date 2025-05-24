class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows) return s;

        vector<string> rows(numRows);
        int row = 0;

        bool downwards = false;

        for(int i = 0; i < s.length(); i++){
            rows[row] += s[i];

            if(row == 0 || row == numRows - 1){
                downwards = !downwards;
            }
        row += downwards ? 1 : -1;
        }


        string result;

        for (string c: rows) {
            result += c;
        }

        return result;

    }
};
