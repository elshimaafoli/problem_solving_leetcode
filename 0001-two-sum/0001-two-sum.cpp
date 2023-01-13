class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> two_sum;
        for(int i=0;i<nums.size();i++)
            two_sum.push_back(nums[i]);
        sort(two_sum.begin(),two_sum.end());            
        int l=0,r=two_sum.size()-1;
        while(l<r)
        {
            if(two_sum[l]+two_sum[r]==target) 
            {
               // cout<<l<<' '<<r<<endl;
                l=two_sum[l];
                r=two_sum[r];
               // cout<<l<<' '<<r<<endl;
                break;
            }
            else if(two_sum[l]+two_sum[r]>target)
                r--;
            else
                l++;
        }
        int ind1=-1,ind2=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==l&&ind1==-1) {ind1=i; continue;}
            if(nums[i]==r){ind2=i;}
        }
       return {ind1,ind2};
    }
};