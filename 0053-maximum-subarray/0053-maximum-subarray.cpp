class Solution 
{
public:
    int maxSubArray(vector<int>& nums)
    {
        int sum, maxsum, i, n;
        n = nums.size();
        sum = 0;
        maxsum = INT_MIN;
        for (i=0; i<n; i++)
        {
            sum += nums[i];
            maxsum = max(maxsum, sum);
            if (sum < 0)
                sum = 0;
        }
        return maxsum;
    }
};