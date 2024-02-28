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
         if (!root) return -1;
        
        queue <TreeNode *> q;
        
        q.push(root);
        
        int leftMost = root->val;
        
        while (!q.empty()){
            int size = q.size();
            int leftMostLevel = q.front()->val;
            for (int i = 0;i < size; i++){
                TreeNode *node = q.front();
                q.pop();
                 if (node->left) {
                q.push(node->left);
                leftMostLevel = min(leftMostLevel, node->left->val); // Update leftmost at current level
            }
            if (node->right) {
                q.push(node->right);
            }
            }
             leftMost = leftMostLevel; 
        }
        
        return leftMost;
    }
};