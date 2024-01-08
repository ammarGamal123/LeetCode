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
    void traceBST (TreeNode* root , vector <bool>&freq){
        if (root == NULL) return;
        
        freq[root->val] = true;
        traceBST(root->left , freq);
        
        freq[root->val] = true;
        traceBST(root->right , freq);
        
       
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector <bool> freq(100006,false);
        
        traceBST(root , freq);
        
        int ans {};
        for (int i = 0; i < freq.size(); i++){
            if (i >= low && i <= high && freq[i])
                ans += i;
        }
        
        return ans;
    }
};