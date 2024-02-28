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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty()){
            int sz =q.size();
            vector<int> vec;
            for(int i = 0; i<sz; i++){
                TreeNode *node = q.front();
                q.pop();
                if(node->left != NULL)  q.push(node->left);
                if(node->right != NULL) q.push(node->right);
                vec.push_back(node->val);
            }
            ans.push_back(vec);
        }
        return ans[ans.size()-1][0];
    }
};