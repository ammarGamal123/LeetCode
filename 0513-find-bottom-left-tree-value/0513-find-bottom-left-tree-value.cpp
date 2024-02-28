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
          maxDepth = -1;
        
        bottomLeftValue = 0;
        dfs(root,0);
        
        return bottomLeftValue;
    }
private:
    int maxDepth;
    int bottomLeftValue;
    
    void dfs (TreeNode * current , int depth){
        if (!current) return ;
        
        if (depth > maxDepth)
            maxDepth = depth,bottomLeftValue = current->val;
        
        dfs(current->left , depth + 1);
        dfs(current->right , depth + 1);

    } 
};