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
    
void dfs(TreeNode* node, vector<int>& path, vector<vector<int>>& result) {
    if (!node) return;

    // Add current node's value to the path
    path.push_back(node->val);

    // If it's a leaf node, add the path to the result
    if (!node->left && !node->right) {
        result.push_back(path);
    }

    // Recursively traverse left and right subtrees
    dfs(node->left, path, result);
    dfs(node->right, path, result);

    // Backtrack: remove the current node from the path
    path.pop_back();
}

vector<vector<int>> allPaths(TreeNode* root) {
    vector<vector<int>> result;
    vector<int> path;
    dfs(root, path, result);
    return result;
}
string smallestFromLeaf(TreeNode* root) {
    vector <vector <int>> all = allPaths(root);
    
    for (auto &i : all){
        reverse(i.begin() , i.end());
    }
    sort (all.begin() , all.end());
    string ans = "";
    for (int i = 0;i < all[0].size(); i++){
        ans += all[0][i] + 'a'; 
    }

    return ans;
}
};