class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int sideXY = 0;
        int sideXZ = 0;
        int sideYZ = 0;
        int aux1 = 0, aux2 = 0;
        
        for(int i = 0; i < grid.size(); i++){
            aux1 = 0;
            aux2 = 0;
            for(int j = 0; j < grid.size(); j++){
                if(grid[i][j] > 0){
                    sideXY++;
                }
                if(grid[i][j] > aux1){
                    aux1 = grid[i][j];
                }
                if(grid[j][i] > aux2){
                    aux2 = grid[j][i];
                }
            }
            sideYZ += aux1; 
            sideXZ += aux2;
        }
        
        return sideXY + sideXZ + sideYZ;
    }
};
