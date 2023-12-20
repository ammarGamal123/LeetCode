class Solution {
public:
    int buyChoco(vector<int>& a, int money) {
        sort (a.begin() , a.end());
        int origin = money;
        int cnt {};
        if (origin - a[0] >= 0)
            origin -= a[0] , cnt ++;
        if (origin - a[1] >= 0)
            origin -= a[1] , cnt ++;
            
            if (origin >= 0 && cnt == 2)
                return origin;
            else return money;
        
    
    }
};