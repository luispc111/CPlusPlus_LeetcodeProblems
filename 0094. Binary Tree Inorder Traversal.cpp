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
    
    void inOrder(TreeNode* a, vector<int>& v){
        if(a->left != NULL){
           inOrder(a->left, v); 
        }
        v.insert(v.end(), a->val);
        if(a->right != NULL){
            inOrder(a->right, v);
        }
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root!=NULL){
           inOrder(root, result); 
        }
        return result;
    }
};