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
    TreeNode* helper (const vector <int> &a , int left , int right){
        if (left > right)
            return nullptr;

        int mid = (left + right) / 2;

        TreeNode * node = new TreeNode(a[mid]);

        node->left = helper(a , left , mid - 1);
        node->right = helper(a , mid + 1 , right);

        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& a) {
        int n = a.size();

        return helper (a , 0 , n - 1);
    }
};