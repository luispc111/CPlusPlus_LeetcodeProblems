class Solution {
public:
    bool validPalindrome(string s) {
                
        if(s.length() <= 1){
            return true;
        }
        
        int max = s.length()-1;
        int min = 0;
        int count = 0;
        
        
        while(max > min){
            if(s[min] != s[max] && count == 0){
                if(s[min+1] == s[max] && s[min] != s[max-1]){
                    count++;
                    min++;
                }
                else if(s[min] == s[max-1] && s[min+1] != s[max]){
                    count++;
                    max--;
                }
                else if(s[min] == s[max-1] && s[min+1] == s[max]){
                    int auxmin=min, auxmax=max;
                    while(s[auxmin] == s[auxmax-1] && s[auxmin+1] == s[auxmax]){
                        auxmin++;
                        auxmax--;
                        if(s[auxmin+1] == s[auxmax] && s[auxmin] != s[auxmax-1]){
                            count++;
                            min++;
                        }
                        else if(s[auxmin] == s[auxmax-1] && s[auxmin+1] != s[auxmax]){
                            count++;
                            max--;
                        }
                    }
                    if(s[min+1] == s[max] && s[min] != s[max-1]){
                        count++;
                        min++;
                    }
                    else if(s[min] == s[max-1] && s[min+1] != s[max]){
                        count++;
                        max--;
                    }
                }
                else{
                    return false;
                }
            }
            else if(s[min] != s[max]){
                return false;
            }
            max--;
            min++;

        }
        return true;
    }
};