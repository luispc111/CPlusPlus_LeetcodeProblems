class Solution {
public:
    bool checkRecord(string s) {
        
        int status = 0;
        int As = 0;
        int Ls = 0;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'A'){
                if(As == 0){
                    As++;
                    Ls=0;
                }
                else{
                    return false;
                }
            }
            else if(s[i] == 'L'){
                if(Ls == 2){
                    return false;
                }    
                else{
                    Ls++;
                }
            }
            else{
                Ls=0;
            }
        }
        return true;
            
    }
};