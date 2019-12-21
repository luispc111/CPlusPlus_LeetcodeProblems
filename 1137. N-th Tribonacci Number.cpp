class Solution {
public:
    int tribonacci(int n) {
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        else if(n==2){
            return 1;
        }
        else{
            int comb=0;
            int aux1=0, aux2=1, aux3=1;
            for(int i = 3; i <= n; i++){
                comb = aux1 + aux2 + aux3;
                if(i%3 == 0){
                    aux1=comb;
                }
                else if (i%3 == 1){
                    aux2=comb;
                }
                else{
                    aux3=comb;
                }
            }
            return comb;
        }
    }
};