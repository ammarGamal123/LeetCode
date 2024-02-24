class Solution {
public:
    bool bishopMoves (int a , int b , int e , int f , int x , int y){
        int A = a , B = b;
        
        while (A >= 1 && A <= 8 && B >= 1 && B <= 8){
            if (A == e && B == f) break;
            else if (A == x && B == y)
                return true;
            
            A ++ , B ++;
        }
        A = a , B = b;
        while (A >= 1 && A <= 8 && B >= 1 && B <= 8){
            if (A == e && B == f) break;
            if (A == x && B == y)
                return true;
            
            A -- , B --;
        }
        
        A = a , B = b;
        while (A >= 1 && A <= 8 && B >= 1 && B <= 8){
            if (A == e && B == f) break;
            if (A == x && B == y)
                return true;
            
            A ++ , B --;
        }
        
        A = a , B = b;
        while (A >= 1 && A <= 8 && B >= 1 && B <= 8){
            if (A == e && B == f) break;
            if (A == x && B == y)
                return true;
            
            A -- , B ++;
        }
        
        return false;
    }
    bool rookMoves (int a , int b , int c , int d , int e , int f){
        int A , B;
        
        A = a , B = b;
        while (A >= 1 && A <= 8 && B >= 1 && B <= 8){
            if (A == c && B == d)
                break;
            else if (A == e && B == f)
                return true;
            
            A++;
        }
        A = a , B = b;
        
        while (A >= 1 && A <= 8 && B >= 1 && B <= 8){
            if (A == c && B == d)
                break;
            else if (A == e && B == f)
                return true;
            B ++;
        }
        
        A = a , B = b;
        
        while (A >= 1 && A <= 8 && B >= 1 && B <= 8){
            if (A == c && B == d)
                break;
            else if (A == e && B == f)
                return true;
            B --;
        }
        A = a , B = b;
        
        while (A >= 1 && A <= 8 && B >= 1 && B <= 8){
            if (A == c && B == d)
                break;
            else if (A == e && B == f)
                return true;
            A --;
        }
        
        
        return false;
    }
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) {
        
        bool checkRook = rookMoves (a , b , c , d , e , f);
        if (checkRook) return 1;
        
        bool checkBishop = bishopMoves(c , d , a , b , e , f);
        return checkBishop ? 1 : 2;
    }
};