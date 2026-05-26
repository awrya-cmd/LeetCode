class Solution
{
public:
    int numberOfSpecialChars(string word)
    {
        int count = 0;
        unordered_set<char> set (word.begin(), word.end()) ;
        for(int i = 0; i < word.size(); i++)
        {
            if(word[i] >= 'a' && word[i] <= 'z')
            {
                if(set.find(toupper(word[i])) != set.end()) 
                {
                    count++;
                    set.erase(word[i]);
                    set.erase(toupper(word[i]));
                }
            }

            if(word[i] >= 'A' && word[i] <= 'Z')
            {
                if(set.find(tolower(word[i])) != set.end()) 
                {
                    count++;
                    set.erase(word[i]);
                    set.erase(tolower(word[i]));
                }
            }
        }
        return count;
    }
};