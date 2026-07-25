class Solution
{
public:
    int maxProduct(int n)
    {
        vector<int> ans;
        int rem;
        while(n>0)
        {
            rem = n%10;
            ans.push_back(rem);
            n /= 10;
        }
        sort(ans.begin(), ans.end(), greater<int>());
        return ans[1]*ans[0];
    }
};