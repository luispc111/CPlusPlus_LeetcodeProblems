class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> result;
        int res=0;
        
        for(int i = 0; i < A.size(); i++){
            if(A[i]%2==0){
                res+=A[i];
            }
        }
        
        for(int i = 0; i < queries.size(); i++){
            
            if(A[queries[i][1]] % 2 == 0){
                if(queries[i][0] % 2 == 0){
                    res += queries[i][0];
                }
                else{
                    res -= A[queries[i][1]];
                }
            }
            else{
                if(queries[i][0] % 2 == 0){
                    // res += queries[i][0];
                }
                else{
                    res += A[queries[i][1]] + queries[i][0];
                }
            }
            
            A[queries[i][1]] += queries[i][0];
            result.insert(result.end(), res);
        }
        return result;
        
    }
};