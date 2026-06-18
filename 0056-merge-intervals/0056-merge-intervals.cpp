class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {
        int n = intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        for(int i = 0; i < n; i++)
        {
            int start = intervals[i][0];
            int end = intervals[i][1];
            int j = i+1;
            for(j = i+1; j < n; j++)
            {
                if(intervals[j][0] <= end)
                    end = max(end, intervals[j][1]);
                else
                    break;
            }
            i = j - 1;
            ans.push_back({start, end});
        }
        return ans;
    }
};