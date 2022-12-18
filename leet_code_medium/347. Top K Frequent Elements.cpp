class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     map<int,int> frequent;
     map<int, int>::iterator itr;
     for(int i=0;i<nums.size();i++)
     {
         frequent[nums[i]]++;
     }   
     vector <int> results;
     vector<pair<int,int>> sorted;
     for(auto m:frequent)
     {
        sorted.push_back(make_pair(m.second,m.first));
     }
     
     sort(sorted.begin(),sorted.end());
     int i=0;
     for(int j=sorted.size()-1;j>-1;j--,i++)
     {
         if(i==k) break;
        results.push_back(sorted[j].second);    
     }
     
     return results;
    }
};