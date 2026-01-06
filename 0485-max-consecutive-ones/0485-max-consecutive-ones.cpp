class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int i, count = 0, maxi = 0, n;
        n = nums.size();
        for(i=0; i<n; i++)
        {
            if (nums[i]==1)
                count++;
            if (nums[i]==0)
                count = 0;
            maxi = max(maxi,count);
        }
        return maxi;
    }
};
