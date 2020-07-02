class Solution {
public:
    int maxPower(string s) {
        
        if(s.length() <= 1){
            return s.length();
        }
        
        int max=1, count=1;
        char aux = s[0];
        
        for(int i = 1; i < s.length(); i++){
            if(aux == s[i]){
                count++;
            }
            else{
                max = (count>max)?count:max;
                count = 1;
                aux = s[i];
            }
        }
        max = (count>max)?count:max;
        return max;
    }
};