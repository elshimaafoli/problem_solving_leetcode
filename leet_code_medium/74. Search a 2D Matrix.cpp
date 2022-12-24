class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        //  n log n => binary search , tracing [[1,3]]
        for (int i = 0; i < matrix.size(); i++)
        {
            int l = 0, r = matrix[i].size() - 1;
            int mid = (l + r) / 2; // mid 0 //l= 0 // r=1 // t 3
            while (l <= r)
            {
                if (matrix[i][mid] == target)
                    return true;  // no // yes matrix[1][1]=3; 

                else if (matrix[i][mid] > target)
                { // no
                    r = mid - 1;
                    mid = (l + r) / 2;
                }
                else
                {
                    // yes 
                    l = mid + 1; // l=1 r=1 mid=1 
                    mid = (l + r) / 2;
                }
            }
        }
        return false;
    }
};