class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.length();
        
		// Storing count of 'Y' penalties on right if we close on 'ith index'
        vector<int> right(n+1,0);
        for(int i=n-1;i>=0;i--) right[i] = (i<n-1 ? right[i+1]:0) + (customers[i]=='Y');
        
		 // storing 'N' penalties on left if close on 'ith' index
        vector<int> left(n,0);
        
        int min_penalty=n+1;
        int idx=-1;
        
        for(int i=0;i<n;i++){
            int penalty = right[i] + (i>0 ? left[i-1]:0);
            
            if(min_penalty > penalty){
                min_penalty=min(min_penalty,penalty);
                idx = i;
            }
			
			left[i] = (i>0 ? left[i-1]:0) + (customers[i]=='N');
        }
        
		// if we decide to close after all customers have come
        if(min_penalty > right[n] + left[n-1]) return n;
		
        return idx;
    }
};