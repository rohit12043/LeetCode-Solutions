#include <string>

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> stack1;
        if(tokens.size() <= 1) return stoi(tokens[0]);
        int res = 0, num1 = 0, num2 = 0;

        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "/" && tokens[i] != "*"){
                int num = stoi(tokens[i]);
                stack1.push_back(num);
            }
            else{
                num1 = stack1.back(); stack1.pop_back();
                num2 = stack1.back(); stack1.pop_back();

                if(tokens[i] == "+"){
                    res = num1 + num2;
                    stack1.push_back(res);    
                }
                else if(tokens[i] == "-"){
                    res = num2 - num1;
                    stack1.push_back(res);  
                }
                else if(tokens[i] == "*"){
                    res = num1 * num2;
                    stack1.push_back(res); 
                }
                else if (tokens[i] == "/") {
                    res = num2 / num1;  
                    stack1.push_back(res);
                }
            }
        }
        return res;
    }
};
