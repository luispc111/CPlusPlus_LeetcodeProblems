class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int total=0;
        
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(board[i][j] == 'R'){
                    
                    // UP
                    if(i != 0){
                       for(int x = i; x >= 0; x--){
                           if(board[x][j] == 'p'){
                               total++;
                               break;
                           }
                           else if(board[x][j] == 'B'){
                               break;
                           }
                       } 
                    }
                    
                    // DOWN
                    if(i != 7){
                       for(int x = i; x < 8; x++){
                           if(board[x][j] == 'p'){
                               total++;
                               break;
                           }
                           else if(board[x][j] == 'B'){
                               break;
                           }
                       } 
                    }
                    
                    // LEFT
                    if(j != 0){
                       for(int x = j; x >= 0; x--){
                           if(board[i][x] == 'p'){
                               total++;
                               break;
                           }
                           else if(board[i][x] == 'B'){
                               break;
                           }
                       } 
                    }
                    
                    // RIGHT
                    if(j != 7){
                       for(int x = j; x < 8; x++){
                           if(board[i][x] == 'p'){
                               total++;
                               break;
                           }
                           else if(board[i][x] == 'B'){
                               break;
                           }
                       } 
                    }

                    return total;
                }
            }
        }
        return total;
    }
};