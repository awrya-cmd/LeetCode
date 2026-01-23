class Solution
{
public:
    int majorityElement(vector<int>& nums)
    {
        int n, i;
        map<int, int> mp; //element -> frequency
        n = nums.size();
        for(i=0; i<n; i++)
                mp[nums[i]]++;
        for(auto it : mp)
        {
            if(it.second > n/2)
                return it.first;
        }
        return -1;
    }
};