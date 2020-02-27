// #include <stdio.h>
// #include <ctype.h>

class Solution {
public:
    bool isPalindrome(string s) {
        
        if(s.length() <= 1){
            return true;
        }
        
        int max = s.length()-1;
        int min = 0;
            
        while(!isalnum(s[min])){
            min++;
            if(min == max){
                return true;
            }
        }
        while(!isalnum(s[max])){
            max--;
        }
        
        while(max > min){
            if(tolower(s[min]) != tolower(s[max])){
                return false;
            }
            max--;
            min++;
            
            while(!isalnum(s[min])){
                min++;
            }
            while(!isalnum(s[max])){
                max--;
            }
        }
        return true;
    }
};