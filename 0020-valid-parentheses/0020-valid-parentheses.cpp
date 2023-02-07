class Solution {
public:
    bool isValid(string s) {
      map <char,char>n;
        stack<char>res;
        n[')']='(';
        n[']']='[';
        n['}']='{';
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[') res.push(s[i]);
            else if(!res.empty())
            {
                  if(res.top()==n[s[i]]) res.pop();
                  else res.push(s[i]);
            }
             else res.push(s[i]);
        }
        if(!res.empty()) return false;
        return true;
    }
};