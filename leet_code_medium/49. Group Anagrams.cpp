class Solution {
public:
    string sortstring(string a) {
	
	sort(a.begin(),a.end());
	return a;
}
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        	vector<vector<string>> result;
	vector <pair<string,string>> str;
	for (int i = 0; i < strs.size(); i++)
	{
		str.push_back (make_pair(sortstring(strs[i]),strs[i]));
	}
	sort(str.begin(), str.end());
	vector <string> temp;
	temp.push_back(str[0].second);
	for (int i = 1; i < str.size(); i++)
	{
		if (str[i].first == str[i - 1].first)
		{
			temp.push_back(str[i].second);
			continue;
		}
		result.push_back(temp);
		temp.clear();
		temp.push_back(str[i].second);
	}
	result.push_back(temp);
        return result;
    }
};
