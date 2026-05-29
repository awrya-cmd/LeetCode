class Solution
{
public:
    int minElement(vector<int>& nums)
    {
        int mini = INT_MAX;
        for(int x : nums)    
        {
            int sum = 0;
            while(x > 0)
            {
                int d = x % 10;
                x = x /10;
                sum += d;
            }
            x = sum;
            if (x < mini) 
                mini = x;
        }
        return mini;
    }
};