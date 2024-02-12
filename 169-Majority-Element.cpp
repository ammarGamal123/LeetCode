class Solution {
public:
    int majorityElement(vector<int>& a) {
        int count {} , candidate {};
        for (int &i : a){
            if (!count)
                candidate = i;
            if (i == candidate)
                count ++;
            else 
                count --;
        }        
        return candidate;
    }
};