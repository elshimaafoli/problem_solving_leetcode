class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int c=0,sum=0,j=0;
        for(int i=0;i<costs.size();i++)
        {
            sum+=costs[i];
            if(sum>coins) break;    
             c++;                                
        }
        return c;
    }
};