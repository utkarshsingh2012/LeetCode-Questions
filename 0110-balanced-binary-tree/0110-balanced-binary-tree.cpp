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
    int ht(TreeNode *root, int &res){
        
        if(root == NULL)    return 0;
        int lh = ht(root->left, res);
        int rh = ht(root->right, res);
        if(abs(lh-rh) > 1) {
            res = -1;
            return -1;
        }
        return max(lh, rh) + 1;
    }
public:
    bool isBalanced(TreeNode* root) {
        int res = 0;
        int ans = ht(root, res);
        return(res != -1);
    }
};