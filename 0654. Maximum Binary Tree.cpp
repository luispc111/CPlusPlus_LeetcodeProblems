/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        // mando la primera y ultima pos de mi vector
        return helpfunction(nums, 0, nums.size()-1);
    }
    
    TreeNode* helpfunction(vector<int>& nums, int izq, int der){
        
        // poner null si el de la izq es mayor
        if(izq > der){
            return NULL;
        }
        
        int aux = izq;
        
        // en aux me voy a quedar con la posición con el valor más grande
        for(int i = izq; i <= der; i++){
            if(nums[i] > nums[aux]){
                aux = i;
            }
        }
        
        // creo un nodo con el valor maximo
        TreeNode* root = new TreeNode(nums[aux]);
        
        root->left = helpfunction(nums, izq, aux-1);
        root->right = helpfunction(nums, aux+1, der);
        
        return root;
    }
};
