class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        int counter = 0;
        
        // cada pos de J
        for (int i = 0; i<J.length(); i++){
            
            // cada pos de S
            for(int j = 0; j<S.length(); j++){
                
                if (J[i] == S[j]){
                    counter++;
                }
            }
        }
        
        return counter;
    }
};
