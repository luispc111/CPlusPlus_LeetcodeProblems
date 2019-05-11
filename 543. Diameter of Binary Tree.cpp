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
    
    void preHeight(TreeNode *r, int max, int &level){
	if (r != NULL){
		if (max > level){
			level = max;
		}
		max++;
		preHeight(r->left, max, level);
		preHeight(r->right, max, level);
	}
}

    int height(TreeNode *r){
        int max = 1;
        int level = 1;

        preHeight(r, max, level);
        return level;
    }

    int preOrder(TreeNode *r, int &tam){
        if (r != NULL){

            if (height(r->left) + height(r->right) > tam){
                tam = height(r->left) + height(r->right);
            }

            preOrder(r->left, tam);
            preOrder(r->right, tam);
        }

        return tam;
    }

    int diameterOfBinaryTree(TreeNode *root){

        if(root == NULL){
            return 0;
        }

        if (root->left == NULL && root->right == NULL){
            return 0;
        }

        int tam = 0;
        if ((root->left == NULL && root->right != NULL) || (root->left != NULL && root->right == NULL)){
            return preOrder(root, tam)-1;
        }
        return preOrder(root, tam);
    }
};