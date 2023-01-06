class Solution {
public:
   bool wordPattern(string pattern, string s) {

   map <char, string> comp;
   int pc = 0;
    vector<string>words;
    string word = "";
    for (int i = 0; i <=s.size();i++) {

        if (s[i] != ' '&&i!=s.size()) word += s[i];
        else
        {
            words.push_back(word);
           if (comp.find(pattern[pc]) == comp.end()) { 
                bool ch = 1;
                for (int j = 0; j <= pc; j++)
                {
                    if (comp[pattern[j]] == word)
                        ch = 0;
                }
                if(ch)comp[pattern[pc]] = word;
            }
            pc++;
            word = "";
        }
    }
    if (words.size() != pattern.length()) return false;

    for (int i = 0; i < pattern.length(); i++)
    {
        if (comp[pattern[i]] != words[i]) return false;
    }
    return true;
}
};