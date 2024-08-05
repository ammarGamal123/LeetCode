class Solution {
public:
    string kthDistinct(vector<string>& a, int k) {
    int n = a.size();
    unordered_map <string , bool> mp , removed;

    for (int i = 0;i < n; i++){
        if (mp[a[i]])
            removed[a[i]] = true;
        else
            mp[a[i]] = true;
    }
    int cnt = 1;

    for (int i = 0;i < n; i++){
        if (!removed[a[i]] && cnt == k)
            return a[i];
        else if (!removed[a[i]])
            ++ cnt;
    }

   return "";
}
};