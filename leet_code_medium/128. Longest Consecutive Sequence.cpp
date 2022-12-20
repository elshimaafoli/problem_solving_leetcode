class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      map<int,int>num;
      map<int,int>::iterator itr;
      int counter=0,mx_value=0;
        for(int i=0;i<nums.size();i++)
        {
            num[nums[i]]++;
        }
        if(nums.size()==0) return 0;
        if(num[nums[0]]==nums.size())
        return 1;
        nums.clear();

        for( itr = num.begin();itr!=num.end();itr++)
                nums.push_back(itr->first);

        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1)
            {
                counter++;
            }
            else
            {
                mx_value=max(mx_value,counter);
                counter=0;
            }
        }
         mx_value=max(mx_value,counter);
        return ++mx_value;
    }
};