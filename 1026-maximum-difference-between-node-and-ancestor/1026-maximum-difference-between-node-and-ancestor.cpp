class Solution {
    public:
    vector <pair<int,int>> need;

    int maxAncestorDiff(TreeNode *root) {
        
        recursion(root , {});
        int maxDiff = 0;
        
        for (int i = 0;i < need.size(); i++){
            
            maxDiff = max(maxDiff , need[i].first - need[i].second);
        }
        
        
		return maxDiff;
	}
    
    void recursion(TreeNode * root ,vector<int> path){
        if (root == NULL)
            return ;
        
        path.emplace_back(root->val);
        
        if (root->left == NULL && root->right == NULL){
            int Min = *min_element(path.begin() , path.end());
            int Max = *max_element(path.begin() , path.end());
            
            need.push_back({Max , Min});
        }
        
        
        recursion(root->left , path);
           
        recursion(root->right , path);
        
    }

};