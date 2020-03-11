class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> v;
        int start, count=0;
        char aux;
        
        if(S.length() == 0){
            return v;
        }
        else{
            aux = S[0];
            start = 0;
            count = 1;
        }
        
        for(int i = 1; i < S.length(); i++){
            if(S[i] == aux){
                count++;
            }
            else{
                if(count >= 3){
                    vector<int> vInsert = {start, i-1};
                    v.push_back(vInsert);
                }
                start = i;
                count = 1;
                aux = S[i];
            }
            
            if(i == S.length()-1){
                if(S[i] == aux){
                    aux++;
                    if(count >= 3){
                        vector<int> vInsert = {start, i};
                        v.push_back(vInsert);
                    }
                }
            }
        }
        return v;        
    }
};