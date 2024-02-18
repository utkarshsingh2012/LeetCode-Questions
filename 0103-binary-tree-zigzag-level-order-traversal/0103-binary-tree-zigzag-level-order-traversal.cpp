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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == nullptr) return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool flag = true;
        while(!q.empty()){
            int sz = q.size();
            vector<int> vec;
            for(int i = 0; i<sz; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left!= NULL)   q.push(node->left);
                if(node->right != NULL) q.push(node->right);
                vec.push_back(node->val);
            }
            if(!flag){
                reverse(vec.begin(), vec.end());
            }
            flag = !flag;
            ans.push_back(vec);
        }
        return ans;
    }
};