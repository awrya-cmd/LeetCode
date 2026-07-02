class Solution
{
public:
    string reverseWords(string s)
    {
        stack<string> st;

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
                st.push(word);
                i++;
            }
        }

        string word;

        while (!st.empty())
        {
            word += st.top();
            st.pop();
            if(!st.empty())
                word += ' ';
        }

        return word;
    }
};