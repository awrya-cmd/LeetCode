class Solution
{
public:
    int search(vector<int>& nums, int target)
    {
        int i, low, high, mid;
        i = 0;
        low = 0;
        high = nums.size()-1;
        while (low<=high)
        {
            mid = (low+high)/2;
            if (nums[mid]==target)
                return mid;
            if (nums[mid]>target)
                high = mid-1;
            else
                low = low+1;
        }
        return -1;
    }
};