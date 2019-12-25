/*
    Nombre: Luis Alberto Pérez Chapa
    ID: A01282564
*/


class Solution {
public:
    int minAddToMakeValid(string S) {
        
        int izq = 0, neg = 0;
        
        for(int pos = 0; pos < S.length(); pos++){
            if(S[pos] == '('){
                izq++;
            }
            else{
                if(izq == 0){
                    neg++;
                }
                else{
                    izq--;
                }
            }
        }
        return izq+neg;
    }
};
