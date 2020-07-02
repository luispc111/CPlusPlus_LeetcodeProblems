class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        if(nums.empty()){
            return 0;
        }
        
        int max = 0, count=0;
        if(nums[0] == 1){
            count=1;
        }
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == 1){
                count++;
            }
            else{
                max = (count>=max)?count:max;
                count=0;
            }
        }
        
        max = (count>=max)?count:max;
        return max;
    }
};