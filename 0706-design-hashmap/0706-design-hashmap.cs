public class MyHashMap {
    int [] freq ;
    public MyHashMap() {
        freq = new int [1000001];
        Array.Fill (freq , -1);
    }
    
    public void Put(int key, int value) {
        freq[key] = value;
    }
    
    public int Get(int key) {
        return freq[key];
    }
    
    public void Remove(int key) {
        freq[key] = -1;   
    }
}

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap obj = new MyHashMap();
 * obj.Put(key,value);
 * int param_2 = obj.Get(key);
 * obj.Remove(key);
 */