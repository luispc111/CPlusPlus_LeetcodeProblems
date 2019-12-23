/*
    Nombre: Luis Alberto Pérez Chapa
    ID: A01282564
*/

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        int arr[2][N];
        
        // llenar mat de 0s
        for (int i = 0; i < N; i++) {
            arr[0][i] = 0;
            arr[1][i] = 0;
        }

        // llenar confs y arr
        if (trust.size() > 1){
            for (int i = 0; i <= trust.size()-1; i++) {
                arr[0][trust[i][0]-1]++;
                arr[1][trust[i][1]-1]++;
            }
        }
        else if (trust.size() == 1){
            return trust[0][1];
        }
        else if (trust.size() == 0){
            return 1;
        }

        // confirmar y return
        for(int i = 0; i < N; i++){
            if(arr[0][i] == 0 && arr[1][i] == N-1){
                return i+1;
            }
        }

        return -1;  
    }   
};
