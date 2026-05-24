class Solution
{
public:
    void rotate(vector<vector<int>>& matrix)
    {
        int n = matrix.size();

        // create transpose matrix
        vector<vector<int>> transposed(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                transposed[i][j] = matrix[j][i];
            }
        }

        // reverse every row
        for(int i = 0; i < n; i++)
        {
            reverse(transposed[i].begin(), transposed[i].end());
        }

        matrix = transposed;
    }
};