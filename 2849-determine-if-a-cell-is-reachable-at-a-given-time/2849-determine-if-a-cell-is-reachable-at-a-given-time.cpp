class Solution {
public:
    bool isReachableAtTime(int x1, int x2, int y1, int y2, int t) {
        if (x1 == y1 && x2 == y2){
            return (t > 1 || t == 0);
        }
        
        int distRow = abs (y1 - x1);
        int distColumn = abs (x2 - y2);
        
        int extraSquares = abs (distRow - distColumn);
        
         
        return (min (distRow , distColumn) + extraSquares <= t ? true : false);
    }
};