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
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> ans;
        check (root , ans);
        
        return ans;
    }
    
    void check (TreeNode* root , vector <int> &ans){
        if (root == nullptr )
            return ;
        
        
        check(root->left , ans);
        ans.emplace_back(root->val);
        check(root->right , ans);
    }
};