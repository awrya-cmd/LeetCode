class Solution
{
public:
    int largestAltitude(vector<int>& gain)
    {
        vector<int> ans;
        int x = 0;
        for(int i = 0; i < gain.size(); i++)      
        {
            ans.push_back(x);
            x = gain[i] + x;
        }
        ans.push_back(x);
        int maxi = *max_element(ans.begin(), ans.end());
        return maxi;
    }
};