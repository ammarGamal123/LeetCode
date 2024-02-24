class Solution {
public:
    int maximumSetSize(vector<int>& num1, vector<int>& num2) {
    int n = num1.size();
    set <int> st1 , st2 , ans;

    for (auto i : num1) st1.insert(i);
    for (auto i : num2) st2.insert(i);
    if (st1.size() > st2.size())
        swap(st1 , st2);


    if (st1.size() < n / 2) {
        for (int i : st1){
            if (st2.count(i))
                st2.erase(i);
        }

        return st1.size() + min((int)st2.size() , n / 2);
    }

    int rem = 0;

    for (int i : st1){
        if (st2.count(i))
            rem ++;
    }

    int a = st1.size() - rem; // unique
    int b = max ((int)0 , n / 2 - a); // overlap
    int c = min (n / 2 , (int) st2.size() - b);

    return (n / 2) + c;
}
};