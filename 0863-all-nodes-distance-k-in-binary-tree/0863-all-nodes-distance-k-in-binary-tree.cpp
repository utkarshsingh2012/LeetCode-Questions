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
    unordered_map<TreeNode*, TreeNode*> parentref(TreeNode* root){
        unordered_map<TreeNode*, TreeNode*> mp;
        if(root == NULL)    return mp;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int sz = q.size();

            for(int i = 0; i<sz; i++){
                TreeNode* node = q.front();
                q.pop();

                if(node->left != NULL){
                    mp[node->left] = node;
                    q.push(node->left);
                }
                if(node->right != NULL){
                    mp[node->right] = node;
                    q.push(node->right);
                }
            }
        }
        return mp;
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> mp = parentref(root);
        unordered_map<TreeNode*, bool> vis;
        queue<TreeNode*> q;
        q.push(target);
        vis[target] = true;
        int dis = 0;
        while(!q.empty()){
            int sz = q.size();
            if(dis++ == k)  break;
            for(int i = 0; i<sz; i++){
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left != NULL && !vis[curr->left]){
                    q.push(curr->left);
                    vis[curr->left] = true;
                }
                if(curr->right != NULL && !vis[curr->right]){
                    q.push(curr->right);
                    vis[curr->right] = true;
                }
                if(mp[curr] && !vis[mp[curr]]){
                    q.push(mp[curr]);
                    vis[mp[curr]] = true;
                }
            }
        }
        vector<int> ans;
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            ans.push_back(node->val);
        }
        return ans;
    }
};