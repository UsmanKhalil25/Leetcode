#include<stack>
#include<string>

bool isValid(std::string s) {
    std::stack<char> stack;
    for(int i = 0;i<s.length();i++) {
        char ch = s[i];
        if(ch == '(' || ch =='{' || ch =='[') {
            stack.push(ch);
        }
        else if( !stack.empty()) {
            char stack_top = stack.top();
            if((stack_top == '(' && ch == ')') || (stack_top =='{' && ch =='}') ||  (stack_top =='[' && ch ==']')) {
                stack.pop();
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }

    if (stack.size()!=0) {
        return false;
    }
    return true;
}
