class Solution {
public:
    int subarraySum(vector<int>& nums, int k)
    {
        unordered_map<int, int>mp;
        mp[0] = 1;
        int cnt = 0; 
        int prefixsum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            prefixsum += nums[i];
            int x = prefixsum - k;
            cnt += mp[x];
            mp[prefixsum]++;
        }
        return cnt;
    }
};