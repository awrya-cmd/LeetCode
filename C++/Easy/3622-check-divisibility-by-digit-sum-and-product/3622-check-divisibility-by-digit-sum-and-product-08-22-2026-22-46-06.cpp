class Solution
{
public:
    bool checkDivisibility(int n)
    {
        int sum = 0;
        int pr = 1;    
        int og = n;
        int dig;
        while(n > 0)
        {
            dig = n % 10;
            n /= 10;
            sum += dig;
            pr *= dig;
        }
        if(og % (sum+pr) == 0) return true;
        return false;
    }
};