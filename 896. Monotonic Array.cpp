class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        
        if(A.size() <= 1){
            return true;
        }
        bool b;
        if(A[0]<=A[A.size()-1]){
            //el izq es m�s chico
            b = true;
        }
        else{
            //el der es m�s chico
            b = false;
        }
        
        if(b){
            for (int i = 0; i < A.size()-1; i++){
                if (A[i]>A[i+1]){
                    return false;
                }
            }
        }
        else{
            for (int i = A.size()-1; i > 0; i--){
                if (A[i]>A[i-1]){
                    return false;
                }
            }
            
        }
        return true;
    }
};
