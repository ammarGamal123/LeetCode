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
    void leafSeq1(TreeNode* root , vector <int> &st1){
        if (root == NULL){
            return ;
        }
        
        if (root->left == NULL && root->right == NULL){
            st1.emplace_back(root->val);
        }
        
        leafSeq1(root->left , st1);
        
        leafSeq1(root->right , st1);
    }
    
     void leafSeq2(TreeNode* root , vector <int> &st2){
        if (root == NULL){
            return ;
        }
        
        if (root->left == NULL && root->right == NULL){
            st2.emplace_back(root->val);
        }
        
        leafSeq2(root->left , st2);
        
        
        leafSeq2(root->right , st2);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       vector<int> st1 , st2;
        
        leafSeq1(root1 , st1);
        leafSeq2(root2 , st2);
        
        return st1 == st2;
    }
};