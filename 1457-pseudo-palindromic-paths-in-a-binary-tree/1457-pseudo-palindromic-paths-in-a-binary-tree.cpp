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
    vector<vector<int>> a;
    int ans {};
    void GeneratePaths(vector<int> cur , TreeNode *root){
        
        if (root == nullptr){
            return;
        }
        
         cur[root->val] ++;
        if (root->left == nullptr && root->right == nullptr && !cur.empty())
        {
            int cntOdd {};
            for (int i = 0;i < 10; i++){
                if (cur[i] & 1)
                    ++ cntOdd;
            }
            
            ans += cntOdd <= 1;
        }
        
        GeneratePaths(cur , root->left);
        GeneratePaths(cur , root->right);
        
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        vector <int> cur(10);
        GeneratePaths(cur , root);
        
        return ans;
    }
};