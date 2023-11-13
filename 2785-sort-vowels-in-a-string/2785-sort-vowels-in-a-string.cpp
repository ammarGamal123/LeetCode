class Solution {
public:
    
    string sortVowels(string s) {
        int freq[70];
        memset (freq, -1 , sizeof freq);
        
        freq['A' - 'A'] ++ , freq['E' - 'A'] ++ , freq['I' - 'A'] ++;
        freq['O' - 'A'] ++ , freq['U' - 'A'] ++;
        
        freq['a' - 'A'] ++ , freq['e' - 'A'] ++ , freq['i' - 'A'] ++;
        freq['o' - 'A'] ++ , freq['u' - 'A'] ++;
        
        priority_queue <char , vector <char> , greater <>> pq;
        
        for (int i = 0;i < s.size(); i++){
            if (freq[s[i] - 'A'] >= 0)
                pq.push(s[i]);
        }
        
        for (int i = 0;i < s.size(); i++){
            if (freq[s[i] - 'A'] >= 0){
                s[i] = pq.top();
                pq.pop();
            }
        }
        return s;
    }
};