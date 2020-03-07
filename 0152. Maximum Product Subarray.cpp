class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int max = nums[0];
        int aux;
            
        for(int i = 0; i < nums.size(); i++){
            
            aux=nums[i];
            if(aux > max){
                max=aux;
            }
            
            for(int j = i+1; j < nums.size(); j++){
                aux = aux * nums[j];
                if(aux > max){
                    max=aux;
                }
            }
        }
        
        return max;
    }
};