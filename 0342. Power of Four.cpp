class Solution {
public:
    bool isPowerOfFour(int num) {
        while(num%4 == 0 && num > 0){
            num = num/4;
        }
        
        if(num == 1){
            return true;
        }
        
        return false; 
    }
};

