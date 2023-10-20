public class Solution {
    public bool DetectCapitalUse(string word) {
        bool allCapital = true , allSmall = true;
        
        foreach (var c in word){
            if (c >= 'A' && c <= 'Z')
                allSmall = false;
            else allCapital = false;
        }
        if (allCapital || allSmall)
            return true;
        
        bool unique = (word[0] >= 'A' && word[0] <= 'Z');
        for (int i = 1;i < word.Length; i++){
            if (word[i] <= 'Z') return false;
        }
        return unique;
    }
}