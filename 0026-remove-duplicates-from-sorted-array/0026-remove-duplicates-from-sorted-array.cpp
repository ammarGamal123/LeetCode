class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int j = 0;
        for (int i = 1;i < a.size(); i++){
            if (a[i] != a[j]){
                j ++;
                
                a[j] = a[i];
            }
        }
        
        for (int i = 0;i < a.size(); i++){
            cout << a[i] << " ";
        }
        cout << endl;
        
        return j + 1;
    }
};