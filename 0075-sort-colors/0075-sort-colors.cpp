class Solution {
public:
    void sortColors(vector<int>& a) {
        
       int low = 0 , high = a.size() - 1 , mid = 0;

       while (mid <= high){
           if (!a[mid]){
               swap (a[mid] , a[low]);
               mid ++ , low ++;
           }
           else if (a[mid] == 1){
               mid ++;
           }
            else {
                swap (a[mid] , a[high]);
                high --;
            }
       }
    }
};