class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> indices(2,-1);
        int i, j, n;
        n = nums.size();
        for (i=0; i<n; i++)
        {
            for (j=i+1; j<n; j++)
            {
                if (nums[i]+nums[j]==target)
                {
                    indices[0] = i;
                    indices[1] = j;
                }
            }
        }
        return indices;
    }
};