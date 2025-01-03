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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        queue<TreeNode*> q;
        unordered_map<TreeNode*,TreeNode*> parent;
        q.push(root);

        while(!q.empty()){
            TreeNode*front=q.front();
            q.pop();
            if(front->left){
                parent[front->left] = front;
                q.push(front->left);
            }
            if(front->right){
                parent[front->right] = front;
                q.push(front->right);
            }
        }

        unordered_map<TreeNode*,bool> visited;
        q.push(target);
        visited[target]=true;
        int cnt=0;
        while(!q.empty()){
            if(cnt==k) break;
            cnt++;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode*front=q.front();
                q.pop();
                if(front->left  &&  !visited[front->left]){
                    q.push(front->left);
                    visited[front->left]=true;
                }
                if(front->right  &&  !visited[front->right]){
                    q.push(front->right);
                    visited[front->right]=true;
                }
                if(parent[front]  &&  !visited[ parent[front] ]){
                    q.push( parent[front] );
                    visited[parent[front]]=true;
                }
            }
        }
        vector<int> ans;
        while(!q.empty()){
            TreeNode*front=q.front();
            q.pop();
            ans.push_back( front->val );
        }
        return ans;
    }
};











+