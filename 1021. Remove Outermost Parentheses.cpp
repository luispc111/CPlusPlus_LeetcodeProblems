class Solution {
public:
    string removeOuterParentheses(string S) {
        
        int p = 0;
        for(int i = S.length()-1; i >= 0; i--){
            if(S[i] == '('){
                p--;
                if(p == 0){
                    S.erase(i,1);
                }
                
            }
            else{
                if(p == 0){
                    S.erase(i,1);
                }
                p++;
            }
        }
        return S;
    }
};