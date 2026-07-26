class Solution
{
public:
    int maximumProduct(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int a= nums[1]*nums[0]*nums[n-1];
        int b = nums[n-2]*nums[n-1]*nums[n-3];
        return max(a, b);
    }
};