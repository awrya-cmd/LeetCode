class Solution
{
public:
    bool isGood(vector<int>& nums)
    {
        int maxi = *max_element(nums.begin(), nums.end());
        vector<int> freq(maxi + 1, 0);
        if (nums.size() != maxi + 1)
            return false;
        for(int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }
        for(int i = 1; i < nums.size(); i++)
        {
            if(freq[i] == 0)
                return false;
        }
        return (freq[maxi] == 2);
    }
};