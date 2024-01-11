class Solution {
    public:
    vector <vector<int>> need;

    int maxAncestorDiff(TreeNode *root) {
        
        recursion(root , {});
        int maxDiff = 0;
        
        for (int i = 0;i < need.size(); i++){
            int Min = *min_element(need[i].begin() , need[i].end());
            int Max = *max_element(need[i].begin() , need[i].end());
            
            maxDiff = max(maxDiff , Max - Min);
        }
        
        
		return maxDiff;
	}
    
    void recursion(TreeNode * root ,vector<int> path){
        if (root == NULL)
            return ;
        
        path.emplace_back(root->val);
        
        if (root->left == NULL && root->right == NULL){
            need.push_back(path);
        }
        
        
        recursion(root->left , path);
           
        recursion(root->right , path);
        
    }

};