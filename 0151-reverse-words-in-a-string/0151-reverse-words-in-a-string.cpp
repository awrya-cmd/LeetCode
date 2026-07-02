class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> list;

        int n = s.size();
        int i = 0;

        while(i < n)
        {
            while(i < n && s[i] == ' ')
                i++;
            string word;
            while(i < n && s[i] != ' ')
            {
                word += s[i];
                i++;
            }
            if(!word.empty())
            {
                list.push_back(word);
                i++;
            }
        }

        string word;

        reverse(list.begin(), list.end());
        for(int i = 0; i < list.size(); i++)
        {
            word += list[i];
            if(i < list.size()-1) word += " ";
        }

        return word;
    }
};