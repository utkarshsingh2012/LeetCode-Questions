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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        queue<TreeNode*> q;
        int res = 0;
        q.push(root);
        while(!q.empty()){
            int sz = q.size();
            for(int i = 0; i<sz; i++){
                TreeNode* node = q.front();
                q.pop();
                int lh = ht(node->left);
                int rh = ht(node->right);
                res = max(res, lh+rh);
                if(node->left != NULL)  q.push(node->left);
                if(node->right != NULL) q.push(node->right);
            }
        }
        return res;
       

    }
};