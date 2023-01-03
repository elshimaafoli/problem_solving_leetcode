// using two pointers 
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    if (nums.size()==0) return {-1,-1}; 
     int l=0,r=nums.size()-1;
     while(l<=r)
     {
        if(nums[l]==target&&nums[r]==target)
            return {l,r};
        if(nums[l]!=target&&nums[r]!=target) {l++; r--;} 
        else if(nums[l]!=target) l++;
        else r--;
     }
     return {-1,-1};
    }
};