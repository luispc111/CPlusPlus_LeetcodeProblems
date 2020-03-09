class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        
        if(grid.size() < 3 || grid[0].size() < 3){
            return 0;
        }
        
        vector<int> v = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int total=0;
        int aux; 
        bool bCheck=true;
        
        for(int i = 0; i < grid.size()-2; i++){
            for(int j = 0; j < grid[0].size()-2; j++){
                
                v = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
                bCheck=true;
                
                //  lines
                aux = grid[i][j] + grid[i+1][j] + grid[i+2][j];
                v[grid[i][j]]++;
                v[grid[i+1][j]]++;
                v[grid[i+2][j]]++;
                
                if(aux == grid[i][j+1] + grid[i+1][j+1] + grid[i+2][j+1]){
                    v[grid[i][j+1]]++;
                    v[grid[i+1][j+1]]++;
                    v[grid[i+2][j+1]]++;   
                
                    if(aux == grid[i][j+2] + grid[i+1][j+2] + grid[i+2][j+2]){
                        v[grid[i][j+2]]++;
                        v[grid[i+1][j+2]]++;
                        v[grid[i+2][j+2]]++;  
                        
                        for(int x = 1; x < 10; x++){
                            if(v[x] != 1){
                                bCheck=false;
                                break;
                            }
                        }
                        
                        if(bCheck){
                            
                            // columns
                            if(aux == grid[i][j] + grid[i][j+1] + grid[i][j+2]){
                                if(aux == grid[i+1][j] + grid[i+1][j+1] + grid[i+1][j+2]){
                                    if(aux == grid[i+2][j] + grid[i+2][j+1] + grid[i+2][j+2]){

                                        // diagonals
                                        if(aux == grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2]){
                                            if(aux == grid[i+2][j] + grid[i+1][j+1] + grid[i][j+2]){
                                                total++;
                                            }
                                        }
                                    }
                                }   
                            }
                        }
                    }
                }
            }
        }
        return total;
    }
};