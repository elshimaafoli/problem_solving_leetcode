class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int count=0;
        map <int,int> nums;
        for(int i=0;i<tasks.size();i++)
        {
            nums[tasks[i]]++;
        }
        
        for(int i=0;i<tasks.size();i++)
        { 
            if(nums[tasks[i]]==0) continue;
            
            if(nums[tasks[i]]==1) return -1;
            
            int freq=nums[tasks[i]],tc=0;
            
            if(nums[tasks[i]]%3==0)
            {
                count+=(nums[tasks[i]]/3);
                nums[tasks[i]]=0;
                continue;
            }
            
            tc+=freq/3;
            freq%=3;
            if(freq==1)
                tc++;
            else if(freq%2==0)
            {
                   tc+=freq/2;
            }
           
            count+=tc;
            nums[tasks[i]]=0;
        }
        return count;
    }
};