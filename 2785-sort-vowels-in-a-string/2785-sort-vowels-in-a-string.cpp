class Solution {
public:
    static bool checkVowels (char c){
      return c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'O' || c == 'o'
                || c == 'i' || c == 'I' || c == 'u' || c == 'U';
    }
    
    string sortVowels(string s) {
        
        priority_queue <char , vector <char> , greater <>> pq;
        
        for (int i = 0;i < s.size(); i++){
            if (checkVowels(s[i]))
                pq.push(s[i]);
        }
        
        for (int i = 0;i < s.size(); i++){
            if (checkVowels(s[i])){
                s[i] = pq.top();
                pq.pop();
            }
        }
        return s;
    }
};