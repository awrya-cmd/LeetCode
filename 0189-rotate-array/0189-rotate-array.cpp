class Solution
{
public:
    void rotate(vector<int>& arr, int k)
    {
        int i, n;
        vector<int> temp;
        i = 0;
        n = arr.size();
        k = k%n;
        for(i = n-k; i<n; i++)
        {
            temp.push_back(arr[i]);
        }


        for(i=n-k-1; i>=0; i--)
        {
            arr[i+k] = arr[i];
        }

        for(i=0; i<k; i++)
        {
            arr[i] = temp[i];
        }
    }
};
