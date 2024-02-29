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
    bool isEvenOddTree(TreeNode* root) {
       if (!root) return -1;
        
        queue <TreeNode *> q;
        
        q.push(root);
        
        
        int level = 0;
        while (!q.empty()){
            int size = q.size();
            vector<int> curr;
            for (int i = 0;i < size; i++){
                TreeNode *node = q.front();
                q.pop();
                
                if ((level % 2 == 0 && node->val % 2 == 0) || 
                    (level % 2 == 1 && node->val % 2 == 1)) 
                    return false;
                
                if (!(curr.empty()) &&
                    ((level % 2 == 0 && curr.back() >= node->val) ||
                     (level % 2 == 1 && curr.back() <= node->val)))
                    return false;

                
                curr.emplace_back(node->val);
                
                if (node->left) {
                    q.push(node->left);
                }
                if (node->right) {
                    q.push(node->right);
                }
            }
            ++ level;
        }
        
        return true; 
    }
};