class RandomizedSet {
public:
    unordered_map <int,int> mp;
    vector <int> a;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
            if (mp.count(val)) return false;
            else {
                mp[val] = a.size();
                a.emplace_back(val);
                return true;
            }
    }
    
    bool remove(int val) {
        if (mp.count(val)){
            int idx = mp[val];
            int last_val = a.back();
            a[idx] = last_val;
            a.pop_back();
            mp[last_val] = idx;
            mp.erase(val);
            return true;
        }
        else return false;
    }
    
    int getRandom() {
        int random = std::rand() % a.size();
        return a[random];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet * obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */