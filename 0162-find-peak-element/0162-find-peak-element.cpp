class Solution
{
public:
    int findPeakElement(vector<int>& nums)
    { 
        int maxi = INT_MIN;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)      
        {
            if(nums[i] > maxi)
            {
                ans = i;
                maxi = nums[i];
            }
        }
        return ans;
    }
};