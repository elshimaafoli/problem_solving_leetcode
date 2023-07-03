class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        int cnt = 0, x, y, f[26] = {0};
        
        for(int i = 0; i < goal.size(); i++)
        {
            f[s[i]-97]++;
            if(goal[i] != s[i])
            {
                cnt++;
                if(cnt==1) x = i;
                else if (cnt==2) y=i;
                else return false;
            }
        }
        bool ch=0;
        for(int i = 0; i < 26; i++)
        { if(f[i]>1) ch=1;}
        if(ch==1&&s==goal) return true;
        if (!cnt) return false;
        swap(s[x], s[y]);
        if(s != goal) return false;
        return true;
    }
};