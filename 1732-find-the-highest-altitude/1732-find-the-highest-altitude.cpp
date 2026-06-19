class Solution
{
public:
    int largestAltitude(vector<int>& gain)
    {
        int maxi = 0;
        int x = 0;
        for(int i = 0; i < gain.size(); i++)      
        {
            x = gain[i] + x;
            maxi = max(x, maxi);
        }
        return maxi;
    }
};