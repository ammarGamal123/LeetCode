class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int size = a.size();
        int idx {0};
        for (int i = 1;i < a.size(); i++){
            if (a[i][0] == target){
                idx = i; break;}
            else if (a[i][0] > target){
                idx = i - 1;
                break;
            }
        }
        int l = 0 , r = a[idx].size() - 1;
        while (l <= r ){
            const int mid = (l + r) / 2;
            if (a[idx][mid] == target){
                return true;
            }
            else if (a[idx][mid] > target){
                r = mid - 1;
            }
            else l = mid + 1;
        }
        if (!idx)
            idx = a.size() - 1;

        l = 0 , r = a[idx].size() - 1;
        while (l <= r ){
            const int mid = (l + r) / 2;
            if (a[idx][mid] == target){
                return true;
            }
            else if (a[idx][mid] > target){
                r = mid - 1;
            }
            else l = mid + 1;
        }

        return false;
    }
};