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
    map <int,int> mp;
    void inorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    inorderTraversal(root->left);
    mp[root->val] ++;
    inorderTraversal(root->right);
}
    vector<int> findMode(TreeNode* root) {
        
        inorderTraversal (root);
        
        vector <int> ans;
        
        int Max = 0;
        
        for (auto i : mp){
            Max = max (Max , i.second);
        }
        
        for (auto i : mp){
            if (i.second == Max)
                ans.emplace_back(i.first);
        }
        
        
        return ans;
        
    }
};