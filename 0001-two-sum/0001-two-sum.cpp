class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> mp; // value -> index
        int n, i, req;
        n = nums.size();
        for (i = 0; i < n; i++)
        {
            req = target - nums[i];
            //if not in map, find return iterator to the after the  last element in the map ie end.
            if (mp.find(req) != mp.end())
                return {mp[req], i};
            mp[nums[i]] = i;
        }
        return {-1,-1};
    }
};
