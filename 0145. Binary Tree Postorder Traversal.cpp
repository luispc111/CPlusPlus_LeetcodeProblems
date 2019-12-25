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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vec;
        postOrder(root, vec);
        return vec;        
    }
    
// private, por que solo se puede acceder dede la función public
private:
    void postOrder(TreeNode *r, vector<int> &vec){
	    if(r != NULL){
		    postOrder(r->left, vec);
		    postOrder(r->right, vec);
		    vec.insert(vec.end(), r->val);
	}
}
};
