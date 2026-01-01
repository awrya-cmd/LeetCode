class Solution
{
public:
    vector<int> plusOne(vector<int>& arr)
    {
        int n, i;
        n = arr.size();
        for (i=n-1; i>=0; i--)
        {
            if (arr[i] < 9)
            {
                arr[i] = arr[i]+1;
                return arr;
            }
            arr[i] = 0;
        }
        // if all elements are 9
        arr.insert(arr.begin(),1);
        return arr;
    }
};