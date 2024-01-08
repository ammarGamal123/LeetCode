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
    void traceBST (TreeNode* root , map <int,int> &mp){
        if (root == NULL) return;
        
        mp[root->val] ++;
        traceBST(root->left , mp);
        
        mp[root->val] ++;
        traceBST(root->right , mp);
        
       
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        map <int,int> mp;
        
        traceBST(root , mp);
        
        int ans {};
        for (auto i : mp){
            
            if (i.first >= low && i.first <= high){
              // cout << i.first << " " << i.second << endl;
                ans += (long long)(i.first * (i.second - 1));
            }
        }
        
        return ans;
    }
};