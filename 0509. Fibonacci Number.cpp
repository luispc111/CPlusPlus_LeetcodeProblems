class Solution {
public:
    int fib(int N) {
        if(N == 0){
            return 0;
        }
        else if(N == 1){
            return 1;
        }
        
        int comb=0;
        int aux1=0, aux2=1;
        for(int i = 2; i <= N; i++){
            comb = aux1 + aux2;
            if(i%2 == 1){
                aux2=comb;
            }
            else{
                aux1=comb;
            }
        }
        return comb;
    }
};
