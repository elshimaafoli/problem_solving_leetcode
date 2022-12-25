class Solution {
public:
   bool can (int mid,int h,vector<int>& piles)
             {
                 long long sum=0;
                 for(int i=0;i<piles.size();i++)
                 {
                    
                    if(mid>=piles[i])
                        sum++;
                    else
                    {
                        sum+=ceil(piles[i]/(double)mid);
                    }
                 }
                 return sum<=h;
             }
    int minEatingSpeed(vector<int>& piles, int h)
     {
       
         // minimum  k  to eat all bananes 
         // binary search the answer 

         long long l=1,r=1e9,res=0;
         while(l<=r)
         {
             int mid =(l+r)/2;
            if(can(mid,h,piles)){ 
                res=mid;
                r=mid-1;
            } 
            else // is greater than 
            {
              l=mid+1;
            }
         }
         return res;
    }
};