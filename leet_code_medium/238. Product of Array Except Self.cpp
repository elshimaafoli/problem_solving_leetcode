class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // multiple all numbers and divide by nums[i]  - can't use division
        int size=nums.size();
        vector<int> prefixMultiple;
        vector<int> suffixMultiple;
        prefixMultiple.push_back(nums[0]);
        suffixMultiple.push_back(nums[size-1]);
        for(int i=1;i<size;i++)
        {
           prefixMultiple.push_back(nums[i]);
           prefixMultiple[i]*=prefixMultiple[i-1];
           suffixMultiple.push_back(nums[size-i-1]);
           suffixMultiple[i]*=suffixMultiple[i-1];
        }
        int temp=0;
        for(int i=0;i<size/2;i++)
        { 
            temp=suffixMultiple[size-i-1];
            suffixMultiple[size-i-1]=suffixMultiple[i];
           suffixMultiple[i]=temp;
        }
        vector<int> result;
        
        for(int i=0;i<size;i++)
        {
            // 1  2  6  24  prefix -> 1 2  6 24
            // 4 12 24  24 suffix -->24 24 12 4 suffix[size-1]
            //                        1 2 3 4
            if(i==0) result.push_back(suffixMultiple[i+1]);
            else if(i==(size-1)) result.push_back(prefixMultiple[i-1]); 
            else {
                result.push_back(suffixMultiple[i+1]*prefixMultiple[i-1]);
                 }
        }
    return result;
        
    }
};