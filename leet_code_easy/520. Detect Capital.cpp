class Solution {
public:
    bool detectCapitalUse(string word) {
// linear 
        int c=0;
        for(char s : word)
        {
            if(isupper(s))c++;
        }
        if(c==word.length()) return true;
        if(c==1&&isupper(word[0])) return true;
        if(c==0) return true;
        return false;
    }
};