class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size() <= 1){
            return;
        }
        
        int size = s.size();
        int mid = size/2;
        int auxVal;
        
        for(int i = 0; i <= mid-1; i++){
            auxVal = s[size-i-1];
            s[size-i-1] = s[i];
            s[i] = auxVal;
        }
    }
};