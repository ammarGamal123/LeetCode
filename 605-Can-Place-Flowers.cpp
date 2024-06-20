class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0; // Counter for number of flowers that can be placed
        int size = flowerbed.size();
        
        for (int i = 0; i < size; ++i) {
            if (flowerbed[i] == 0) {
                // Check the previous and next positions
                bool emptyPrev = (i == 0 || flowerbed[i - 1] == 0);
                bool emptyNext = (i == size - 1 || flowerbed[i + 1] == 0);
                
                if (emptyPrev && emptyNext) {
                    // Place a flower here
                    flowerbed[i] = 1;
                    count++;
                    if (count >= n) {
                        return true;
                    }
                }
            }
        }
        
        return count >= n;
    }
};
