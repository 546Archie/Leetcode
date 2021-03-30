#include <stack>

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == ')'){
                if(!stack.empty() && stack.top() == '(')
                    stack.pop();
                else{
                    return false;
                }
            }
            else if(s[i] == ']'){
                if(!stack.empty() && stack.top() == '[')
                    stack.pop();
                else{
                    return false;
                }
            }
            else if(s[i] == '}'){
                if(!stack.empty() && stack.top() == '{')
                    stack.pop();
                else{
                    return false;
                }
    
            else
                stack.push(s[i]);            
        }
        if(!stack.empty())
            return false;
        else
            return true;
    }
};
