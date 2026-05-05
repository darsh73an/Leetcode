class Solution {
public:
    bool isValid(string str) {
        stack<char> s;

        for(char i : str){  
            if(i == '[' || i == '{' || i == '('){
                s.push(i);
            }else{
                if(s.empty()) return false;

                char top = s.top();
                s.pop(); 

                if((top == '(' && i != ')') ||  
                   (top == '[' && i != ']') ||
                   (top == '{' && i != '}')){
                    return false;
                }
            }
        }
        return s.empty();
    }
};