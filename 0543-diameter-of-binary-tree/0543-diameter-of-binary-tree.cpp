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
    int ht(TreeNode* root){
        if(root == NULL)    return 0;
        int lh = ht(root->left);
        int rh = ht(root->right);
        return max(lh, rh) + 1;
    }
public:
    int res = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root == nullptr) return 0;
        int lh = ht(root->left);
        int rh = ht(root->right);
        res = max(res, lh+rh);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return res;
    }
};