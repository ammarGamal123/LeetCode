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
int res;
    void dfs(TreeNode * root , int dir){
        if (root == NULL ) return;
        if (root->left == NULL && root->right == NULL){
            if (!dir)
                res += root->val;
            return;
        }
        dfs(root->left , 0);
        dfs(root->right , 1);

    }
    int sumOfLeftLeaves(TreeNode* root) {
       dfs(root , -1);
       return res; 
    }
};