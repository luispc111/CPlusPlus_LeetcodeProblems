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
    
    void preOrder(TreeNode* a, vector<int>& v){
        v.insert(v.end(), a->val);
        if(a->left != NULL){
           preOrder(a->left, v); 
        }
        if(a->right != NULL){
            preOrder(a->right, v);
        }
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root!=NULL){
           preOrder(root, result); 
        }
        return result;
    }
};