class Solution
{
public:
    vector<int> separateDigits(vector<int>& nums)
    {
        vector<int> temp;
        for (int num : nums)
        {
            string s = to_string(num);
            for(char ch : s)
            {
                temp.push_back(ch - '0');
            }
        }
        return temp;
    }
};