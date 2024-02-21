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
    int ht(TreeNode* root, int &maxi){
        if(root == NULL)    return 0;
        int lh = ht(root->left, maxi);
        int rh = ht(root->right, maxi);
        maxi = max(maxi, lh+rh);
        return 1+max(lh, rh);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)    return 0;
        int maxi = 0;
        int ans = ht(root, maxi);
        return maxi;
    }
};