class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        for(int i=s.size()-1;i>-1;i--){
            if(s[i]!=' ') count++;
            else if(s[i]==' '&&count==0) continue;
            else break;
        }
        return count;
    }
};