class Solution
{
public:
    int removeDuplicates(vector<int>& arr)
    {
       int i, j, n;
       i = 0;
       n = arr.size();
       for (j=1; j<n; j++)
       {
            if (arr[j]!=arr[i])
            {
                arr[i+1] = arr[j];
                i++;
            }
       }
       return i+1;
    }
};