class Solution {
public:
    vector<string> generateParenthesis(int n){
        
        vector<string> combinations;

        if(n == 0){
            return combinations;
        }
        
        string str = "";
        int groups = 0, calculate = 0;
        help(combinations, n, str, groups, calculate);
        return combinations;
    }

    void help(vector<string> &combinations, int n, string aux, int groups, int calculate){
        
        // if there's no error on parenthesis sintaxis
        if(calculate >= 0 && groups <= n*2){

            // if we already put the n groups of parenthesis
            // and calculate variable is 0, add it to the vector
            if(groups == n*2 && calculate == 0){
                combinations.push_back(aux);
            }
            else{
                if(calculate >= 0){
                    help(combinations, n, aux+"(", groups+1, calculate+1);
                }
                help(combinations, n, aux+")", groups+1, calculate-1);
            }
        }
    }
};
