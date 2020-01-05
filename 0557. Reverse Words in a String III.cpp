class Solution {
public:
    
    void reverseIt(string &s, int one, int two){
        char aux;
        int len = ((two-one)/2);
        for(int i = one; i <= one+len; i++){
            aux=s[i];
            s[i] = s[two];
            s[two] = aux;
            two--;
        }
    }
    
    string reverseWords(string s) {
        
        int two;
        int one;
        bool justPassedSpace=true;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' '){
                if(justPassedSpace){
                    one = i;
                    justPassedSpace=false;
                }
            }
            else{
                two = i-1;
                reverseIt(s, one, two);
                justPassedSpace=true;
            }
        }
        reverseIt(s, one, s.length()-1);
        return s;
    }
};