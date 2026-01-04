class Solution
{
public:
    void moveZeroes(vector<int>& nums)
    {
        vector<int> temp(nums.size(),0);
        int i, j, n;
        n = nums.size();
        j =0;
        for (i = 0; i< n; i++)
        {
            if (nums[i] != 0)
            {
                temp[j] = nums[i];
                j++;
            }
        }
        for (i = 0; i < n; i++)
        {
            nums[i] = temp[i];
        }
    }
};
