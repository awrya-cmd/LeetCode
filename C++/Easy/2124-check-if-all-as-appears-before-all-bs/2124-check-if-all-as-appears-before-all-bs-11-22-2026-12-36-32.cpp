class Solution
{
public:
    bool checkString(string s)
    {   
        int a = 0, b = s.size()-1;
        for(int i  = 0; i < s.size(); i++) 
        {
            if (s[i] == 'a') a = i;
            else b = i;
            if(a > b) return false;
        }
        return true;
    }
};