class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        int i, xor_value, n;
        xor_value = 0;
        n = nums.size();
        for (i=0; i<n; i++)
        {
            xor_value = xor_value^nums[i];
        }
        return xor_value;
    }
};