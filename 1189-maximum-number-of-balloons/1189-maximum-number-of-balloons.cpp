class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        int b = 0, a = 0, l = 0, o = 0, n = 0;

        int ans = 0;

        for(char s : text)
        {
            if(s == 'b') b++;
            else if(s == 'a') a++;
            else if(s == 'l') l++;
            else if(s == 'o') o++;
            else if(s == 'n') n++;
        }

        while(b >= 1 && a >= 1 && l >= 2 && o >= 2 && n >= 1)
        {
            b--;
            a--;
            l -= 2;
            o -= 2;
            n--;
            ans++;
        }
        return ans;
    }
};