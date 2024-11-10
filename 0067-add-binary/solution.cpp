class Solution {
public:
    string addBinary(string a, string b) {
    int sum = 0, carry = 0, one = 0, two = 0;
    string result = "";

    for(int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0 || carry; i--, j--){
        one = (i >= 0)? a[i] - '0': 0;
        two = (j >= 0)? b[j] - '0': 0;

        sum = one + two + carry;
        carry = sum / 2;
        sum = sum % 2;

        result = char(sum + '0') + result;
        }
        return result;
    } 
};
