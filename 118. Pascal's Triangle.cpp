class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> pascal;
        vector<int> aux;
        
        if(numRows <= 0){
            return pascal;
        }
        
        if(numRows >= 1){
            aux = {1};
            pascal.push_back(aux);
            aux.clear();
        }
        
        if(numRows >= 2){
            aux = {1, 1};
            pascal.push_back(aux);
            aux.clear();
        }
        
        int cant = 2;
        for(int i = 2; i < numRows; i++){
            aux.clear();

            //first position
            aux.push_back(1);

            //loop
            for(int j = 0; j < cant-1; j++){
                aux.push_back(pascal[i-1][j] + pascal[i-1][j+1]);
            }

            //last position
            aux.push_back(1);
            
            //add to central vector
            pascal.push_back(aux);
            cant++;
        }
        
        return pascal;
    }
};