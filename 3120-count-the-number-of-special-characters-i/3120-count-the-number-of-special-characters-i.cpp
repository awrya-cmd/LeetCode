class Solution
{
public:
    int numberOfSpecialChars(string word)
    {
        int count = 0;
        unordered_set<int> set (word.begin(), word.end());

        for(char ch = 'a'; ch <= 'z'; ch++)
        {
            if(set.count(ch) && set.count(toupper(ch)))
                count++;
        }
        return count;
    }
};