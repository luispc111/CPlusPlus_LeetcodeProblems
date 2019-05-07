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
    int rangeSumBST(TreeNode* root, int L, int R) {
        
        int sum = 0;
        TreeNode *curr = root;
        
        inOrder(curr, R, L, sum);
	    return sum;
    }   
    
private:
    void inOrder(TreeNode *r, int R, int L, int &sum){
	    if (r != NULL){
            
            inOrder(r->left, R, L, sum);
            inOrder(r->right, R, L, sum);
            
            if(r->val >= L && r->val <= R){
                sum += r->val;
            }
	    }
    }
};