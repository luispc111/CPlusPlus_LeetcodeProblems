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
    int countNodes(TreeNode* root) {
        if(root != NULL){
            result++;
            countSum(root);
        }
        return result;
    }
    
    void countSum(TreeNode* root){
        if(root->left != NULL){
            // result++;
            countNodes(root->left); 
        }
        if (root->right != NULL){
            // result++;
            countNodes(root->right);
        } 
    }
};