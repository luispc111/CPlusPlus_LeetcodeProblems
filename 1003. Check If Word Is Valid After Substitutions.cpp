class Solution {
public:
    bool isValid(string S) {
        if(S.length()%3 != 0){
            return false;
        }
        
        stack<char> st;
        
        for(int i = 0; i < S.length(); i++){
            if(S[i] == 'a' || S[i] == 'b'){
                st.push(S[i]);
            }
            else if(S[i] == 'c'){
                if(!st.empty() && st.top() == 'b'){
                    st.pop();
                    if(!st.empty() && st.top() == 'a'){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        
        if(st.empty()){
            return true;
        }
        return false;
    }
};