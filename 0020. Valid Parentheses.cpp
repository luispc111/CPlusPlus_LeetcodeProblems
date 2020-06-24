class Solution {
public:
    bool isValid(string s) {
        
        if(s.length()%2 == 1){
            return false;
        }
        
        
        stack<int> myStack;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                myStack.push(1);
            }
            else if(s[i] == ')'){
                if(!myStack.empty() && myStack.top() == 1){
                    myStack.pop();
                }
                else{
                    return false;
                }
            }            
            else if(s[i] == '['){
                myStack.push(2);
            }            
            else if(s[i] == ']'){
                if(!myStack.empty() && myStack.top() == 2){
                    myStack.pop();
                }
                else{
                    return false;
                }
            }            
            else if(s[i] == '{'){
                myStack.push(3);
            }            
            else if(s[i] == '}'){
                if(!myStack.empty() && myStack.top() == 3){
                    myStack.pop();
                }
                else{
                    return false;
                }
            }
        }
        
        if(myStack.empty()){
            return true;
        }
        return false;
        
    }
};