class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> odd;
        vector<int> even;
        for(int i = 0; i < A.size(); i++){
            if(A[i]%2 == 0){
                even.push_back(A[i]);
            }
            else{
                odd.push_back(A[i]);
            }
        }
        
        for(int i = 0; i < A.size(); i++){
            if(i%2==0){
                A[i] = even[i/2];
            }
            else{
                A[i] = odd[i/2];
            }
        }
        
        return A;
    }
};