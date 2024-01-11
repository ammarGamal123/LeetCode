class Solution {
    public:
    vector <pair<int,int>> need;
    int ans = 0;
    int maxAncestorDiff(TreeNode *root) {
        
        
        recursion(root , 0 , INT_MAX);
        
        
        return ans;
	}
    
    void recursion(TreeNode * root , int Max , int Min){
        if (root == NULL)
            return ;
        
        Max = max (Max , root->val);
        Min = min(Min , root->val);
        
        if (root->left == NULL && root->right == NULL){
            
            ans = max (ans , Max - Min);
        }
        
        
        recursion(root->left , Max , Min);
           
        recursion(root->right, Max , Min);
        
    }

};