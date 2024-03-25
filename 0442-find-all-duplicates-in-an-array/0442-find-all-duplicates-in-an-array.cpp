class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
                
        vector <int> ans;
        
        for (int i = 0;i < a.size(); i++){
            int index = abs (a[i]) - 1;
            
            if (a[index] < 0){
                ans.emplace_back(index + 1);
            }
            else 
                a[index] = -a[index];
        }
       
        return ans;
    }
};