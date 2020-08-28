#include <vector>

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        
        vector<string> base, newBase;
        int aux;
        string sAux;
        
        // every word
        for(int i = 0; i < A.size(); i++){
            
            // every char from word
            for(int j = 0; j < A[i].size(); j++){
                
                // if first round, save it as base
                if(i == 0){
                    sAux = A[i][j];
                    base.push_back(sAux);
                }
                else{
                    sAux = A[i][j];
                    aux = findIndex(base, sAux);
                    if(aux != -1){
                        newBase.push_back(sAux);
                        base[aux] = '-';
                    }
                }   
            }
            
            if(i > 0){
                base = newBase;
                newBase = {};
            }
        }
        
        return base;
    }
    
    int findIndex(vector<string> v, string x){
        for(int i = 0; i < v.size(); i++){
            if(v[i] == x){
                return i;
            }
        }
        return -1;
    }
    
    
};