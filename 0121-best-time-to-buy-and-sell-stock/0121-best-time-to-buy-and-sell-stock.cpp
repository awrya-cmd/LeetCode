class Solution
{
public:
    int maxProfit(vector<int>& nums)
    {
        int i, n, mini, cost, profit;
        n = nums.size();
        mini = INT_MAX;
        profit = 0;
        for(i = 0; i<n; i++)
        {
            mini = min(nums[i], mini);
            cost = nums[i] - mini;
            profit = max(profit, cost);
        }
        return profit;
    }
};