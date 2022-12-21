class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // 2 pointers 
        int p1=0,p2=numbers.size()-1;
        while(p1<p2)
        {
            int y=numbers[p1]+numbers[p2];
            if(y==target) break;
            else if(y>target) {
                p2--;
            }
            else p1++;
         }
         vector<int>twoSum;
         twoSum.push_back(++p1);
         twoSum.push_back(++p2);
         return twoSum;
    }
};