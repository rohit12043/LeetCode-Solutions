class Solution {

private:
char stack1[10001];
int top = -1;
int stacksize = 10001;

public:
void push(char element){
    if (top >= (stacksize-1))
    {
        cout<<"Stack Overflow.\n";
    }
    else{
        stack1[++top] = element;
    }
}

char pop(){
    if (top < 0)
    {
        cout<<"Stack underflow.\n";
        return 0;
    }
    else{
        return stack1[top--];
    }
}

    bool isValid(string s) {
        for (auto& str : s) {
            switch (str) {
            case '(':
            case '{':
            case '[':
                push(str);
                break;

            case ')':
                if (top < 0 ||  stack1[top] != '(') {
                    return false;
                }
                pop();
                break;

            case ']':
                if (top < 0 ||  stack1[top] != '[') {
                    return false;
                }
                pop();
                break;

            case '}':
                if (top < 0 ||  stack1[top] != '{') {
                    return false;
                }
                pop();
                break;

            default:
                return false;
            }
        }
        
        return top == -1;
    }
};
