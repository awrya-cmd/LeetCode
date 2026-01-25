class Solution
{
public:
    int majorityElement(vector<int>& nums)
    {
        int i, n, element, count;
        count = 0;
        n = nums.size();
        for (i=0; i<n; i++)
        {
            if (count == 0)
                {
                    element = nums[i];
                    count++;
                }
            else if (nums[i] == element)
                count++;
            else 
                count--;
        }
        return element;
    }
};