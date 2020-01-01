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
    int result = 0;
    
    int sumOfLeftLeaves(TreeNode* root) {
        if(root != NULL){
            countSum(root);
        }
        return result;
    }
    
    void countSum(TreeNode* root){
        if(root->left != NULL){
            if(root->left->left == NULL && root->left->right == NULL){
                result += root->left->val;
            }
            else{
                sumOfLeftLeaves(root->left); 
            }
        }
        if (root->right != NULL){
            sumOfLeftLeaves(root->right);
        } 
    }
};