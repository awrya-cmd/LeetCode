class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        int n, c=0, sum, i;
        n = nums.size();
        sum = n*(n+1)/2;
        for (i=0; i<n; i++)
            c+=nums[i];
        return sum-c;
    }
};