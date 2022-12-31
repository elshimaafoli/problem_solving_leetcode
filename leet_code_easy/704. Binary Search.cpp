class Solution {
public:
    int search(vector<int>& nums, int target) {
        // using binary search
        // trace [-1],target =2
        int l=0,r=nums.size()-1; //l=0 r=1
        while(l<=r) 
        {
            int mid=(l+r)/2; //1/2 --> 0
            if(nums[mid]==target) return mid; //false

            if(nums[mid]>target) r=mid-1; //false
            else l=mid+1; // true l=1
        }
        return -1;
    }
};