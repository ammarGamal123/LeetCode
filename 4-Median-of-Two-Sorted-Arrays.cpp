class Solution {
public:
    int p1 = 0 , p2 = 0;
    int getMin (vector <int>& a1 , vector<int>& a2){
        if (p1 < a1.size() && p2 < a2.size()){
            return a1[p1] < a2[p2] ? a1[p1 ++]: a2[p2 ++]; 
        }
        else if (p1 < a1.size()){
            return a1[p1 ++];
        }
        else if (p2 < a2.size()){
            return a2[p2 ++];
        }
        return -1;
    }
    
    double findMedianSortedArrays(vector<int>& a1, vector<int>& a2) {
       int m = a1.size() , n = a2.size();
       if ((m + n) % 2 == 0){
           for (int  i = 0;i < (m + n) / 2 - 1; i++){
               int _ = getMin(a1 , a2);
           }
           return (double)(getMin(a1 , a2) + getMin(a1 , a2)) / 2;
       }
       else {
           for (int i = 0;i < (m + n) / 2; i++){
               int _ = getMin(a1 , a2);
           }
           return getMin(a1 , a2);
       }

       return -1;

    }
};