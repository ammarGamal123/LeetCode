class Solution {
public:
   bool canBeEqual(vector<int>& target, vector<int>& arr) {
    vector <int> freq(1005) , freq2(1005);
    for (int i = 0;i < target.size(); i++)
        ++ freq[target[i]] , ++ freq2[arr[i]];
    
    for (int i = 0;i < arr.size(); i++){
        if (freq[arr[i]] != freq2[arr[i]])
            return false;
    }
   
    return true;
}
};