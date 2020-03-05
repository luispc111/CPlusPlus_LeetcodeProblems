class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums[0];
        int aux = 0;
        
        for(int i = 0; i < nums.size(); i++){
            aux=0;
            for(int j = i; j < nums.size(); j++){
                aux += nums[j];
                if(aux > max){
                    max = aux;
                }
            }
        }
        
        return max;
    }
};