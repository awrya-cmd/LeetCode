class Solution
{
public:
    int minimumDeletions(vector<int>& nums)
    {
        int n = nums.size();

        int minIdx = 0;
        int maxIdx = 0;

        // Find positions of min and max
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < nums[minIdx])
                minIdx = i;

            if (nums[i] > nums[maxIdx])
                maxIdx = i;
        }

        // Make minIdx the smaller index
        int left = min(minIdx, maxIdx);
        int right = max(minIdx, maxIdx);

        // 3 possibilities
        int fromFront = right + 1;
        int fromBack = n - left;
        int fromBoth = left + 1 + (n - right);

        return min({fromFront, fromBack, fromBoth});
    }
};