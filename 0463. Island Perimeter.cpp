class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int total=0;
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    
                    // UP
                    if(i == 0){
                        total++;
                    }
                    else{
                        if(grid[i-1][j] == 0){
                            total++;
                        }
                    }
                    
                    // DOWN
                    if(i == grid.size()-1){
                        total++;
                    }
                    else{
                        if(grid[i+1][j] == 0){
                            total++;
                        }
                    }
                    
                    // RIGHT
                    if(j == 0){
                        total++;
                    }
                    else{
                        if(grid[i][j-1] == 0){
                            total++;
                        }
                    }
                    
                    // LEFT
                    if(j == grid[0].size()-1){
                        total++;
                    }
                    else{
                        if(grid[i][j+1] == 0){
                            total++;
                        }
                    } 
                }
            }
        }
        
        return total;
    }
};