class Solution
{
public:
    vector<int> findMissingElements(vector<int>& nums)
    {

        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        vector<int> ans;

        for(int x = mini + 1; x < maxi; x++)
        {

            bool found = false;

            for(int num : nums)
            {
                if(num == x)
                {
                    found = true;
                    break;
                }
            }

            if(!found)
                ans.push_back(x);
        }

        return ans;
    }
};