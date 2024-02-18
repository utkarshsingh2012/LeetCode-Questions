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
private:
    int maxu(TreeNode* root, int &maxi){
        if(root == NULL )    return 0;
        int ls = max(0, maxu(root->left, maxi));
        int rs = max(0,maxu(root->right, maxi));
        maxi = max(maxi, ls+rs+root->val);
        
        return root->val +  max(ls, rs);
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxu(root, maxi);
        return maxi;
    }

};