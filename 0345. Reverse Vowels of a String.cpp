class Solution {
public:
    string reverseVowels(string s) {
        
        if(s.length() <= 1){
            return s;
        }
        
        int two = s.length()-1;
        int one = 0;
        bool bCheck=true;
        char aux;
        
        while(bCheck){
            if(isVowel(s[one]) && isVowel(s[two])){
                aux = s[one];
                s[one] = s[two];
                s[two] = aux;
                one++;
                two--;
            }
            else if(!isVowel(s[one])){
                one++;
            }
            else if(!isVowel(s[two])){
                two--;
            }
            
            if(one >= two){
                bCheck=false;
            }
        }
        return s;
    }
    
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            return true;
        }
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            return true;
        }
        return false;
    }
};