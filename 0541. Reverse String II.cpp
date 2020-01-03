class Solution {
public:
    string reverseStr(string s, int k) {
        int size = s.size();
        int aSize = size;
        int moves=0;
        string result = "";
        bool isReversing=true;
        int actualPos = 0;
        
        while(size >= k){
            moves++;
            size -= k;
        }
        while(moves > 0){
            if(isReversing){
                for(int i = actualPos+k; i > actualPos; i--){
                    result += s[i-1];
                } 
                isReversing = false;
            }
            else{
                for(int i = actualPos; i < actualPos+k; i++){
                    result += s[i];
                } 
                isReversing=true;
            }
            actualPos += k;
            moves--;
        }
        
        if(size != 0){
            if(isReversing){
                for(int i = aSize-1; i >= actualPos; i--){
                    result += s[i];
                } 
            }
            else{
                for(int i = actualPos; i < aSize; i++){
                    result += s[i];
                }
            }
        }
        
        return result;
    }
};