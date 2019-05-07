#include <map>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int,int> elementos;
        
        for (int i = 0; i < nums.size(); i++){
            
            // No está en mi map
            if(elementos.find(nums[i]) == elementos.end()){
                elementos.insert({nums[i], 1});
            }
            // Si está en mi map
            else{
                elementos[nums[i]] += 1; 
            }
            
            // Verificar
            if (elementos[nums[i]] > nums.size()/2){
                return nums[i];
            }
        } 
        return 0;            
    }
};
