class Solution
{
public:
    vector<int> findMissingElements(vector<int>& nums)
    {
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        unordered_set<int> st(nums.begin(), nums.end());

        vector<int> ans;

        for(int x = mini + 1; x < maxi; x++)
        {
            if(st.find(x) == st.end())
                ans.push_back(x);
        }

        return ans;
    }
};