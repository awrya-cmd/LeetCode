class Solution
{
public:
    int longestConsecutive(vector<int>& nums)
    {
        unordered_set<int> mp(nums.begin(), nums.end());        
        int cnt = 0;
        int longest = 1;
        if (!nums.size()) return 0;
        for(auto t : mp)
        {
            if(mp.find(t - 1) == mp.end())
            {
                cnt = 1;
                int x = t;
                while(mp.find(x + 1) != mp.end())
                {
                    cnt++;
                    x++;
                }
                longest = max(cnt, longest);
            }
        }
        return longest;
    }
};