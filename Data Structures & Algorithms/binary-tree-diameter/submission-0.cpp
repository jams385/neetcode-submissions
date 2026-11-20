/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {

        int res = 0;
        pO(root, res);
        return res;
        
    }

    int pO(TreeNode* root, int &res){

        if(root == nullptr)
            return 0;
        
        int left = pO(root->left, res);
        int right = pO(root->right, res);

        int diam = right + left;
        res = max(res, diam);

        return 1 + max(right, left);

    }
};
