class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int final = digits.size()-1;
        
        if(digits[final] == 9 && final != 0){
            while(digits[final] == 9 && final != 0){
                digits[final] = 0;
                final--;
            }
            if(final == 0 && digits[final] == 9){
                digits[0] = 1;
                digits.insert(digits.end(), 0);
            }
            else{
                digits[final]++;
            }
        }
        else{
            if(final == 0 && digits[final] == 9){
                digits[0] = 1;
                digits.insert(digits.end(), 0);
            }
            else{
                digits[final]++;
            }
        }
        
        return digits;
    }
};