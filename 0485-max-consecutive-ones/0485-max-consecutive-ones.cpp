class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int max_count = 0;
        int count = 0;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 1)
            {
                ++count;
            }
            else
            {
                if (count > max_count)
                    max_count = count;
                count = 0;
            }
        }

        if (count > max_count)
            max_count = count;
        return max_count;
    }
};
