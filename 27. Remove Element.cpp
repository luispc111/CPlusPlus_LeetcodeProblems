class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        if(nums.empty()){
            return 0;
        }

        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] == val && nums.size() != 1){
                nums[i] = nums[nums.size()-1];
                nums.erase(nums.end()-1);
                i--;
            }
        }
      
        if (nums[nums.size()-1] == val){
            nums.erase(nums.end()-1);
        }

        return nums.size();
    }
};