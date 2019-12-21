class Solution {
public:
    int climbStairs(int n) {
        
        if(n==1){
            return 1;
        }
        else if(n==2){
            return 2;
        }
        
        int comb=0;
        int aux1=1, aux2=2;
        for(int i = 3; i <= n; i++){
            comb = aux1 + aux2;
            if(i%2==0){
                aux2=comb;
            }
            else{
                aux1=comb;
            }
        }
        return comb;
    }
};