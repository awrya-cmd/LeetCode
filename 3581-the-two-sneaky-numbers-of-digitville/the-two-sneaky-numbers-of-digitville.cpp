class Solution
{
public:
    vector<int> getSneakyNumbers(const vector<int>& nums)
    {
        const int MAX = 100;
        vector<int> count(MAX+1, 0);
        vector<int> ans;
        for (int x : nums)
        {
            if (++count[x] == 2)
            {
                ans.push_back(x);
            }
        }
        return ans;
    }
};
