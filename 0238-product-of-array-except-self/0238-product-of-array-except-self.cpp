class Solution
{
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        vector<int> ans;
        int n = nums.size();
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);

        int prefixProduct = 1;
        int suffixProduct = 1;

        for(int i = 1; i < n; i++)
        {
            prefixProduct *= nums[i-1];
            prefix[i] = prefixProduct;
        }

        for(int i = n-2; i >= 0; i--)
        {
            suffixProduct *= nums[i+1];
            suffix[i] = suffixProduct;
        }

        for(int i = 0; i < n; i++)
        {
            ans.push_back(prefix[i]*suffix[i]);
        }
        
        return ans;

    }
};