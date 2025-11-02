class Solution
{
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls)
    {
        vector<vector<int>> grid(m, vector<int>(n, 0));
        
        // mark guards
        for (auto &g : guards)
            grid[g[0]][g[1]] = 2;
        
        // mark walls
        for (auto &w : walls)
            grid[w[0]][w[1]] = 1;
        
        // directions: up, down, left, right
        vector<vector<int>> dirs = {{-1,0},{1,0},{0,-1},{0,1}};
        
        for (auto &g : guards)
        {
            for (auto &d : dirs)
            {
                int r = g[0] + d[0], c = g[1] + d[1];
                while (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] != 1 && grid[r][c] != 2)
                {
                    // mark guarded
                    if (grid[r][c] == 0)
                        grid[r][c] = 3;
                    r += d[0];
                    c += d[1];
                }
            }
        }
        
        // count unguarded cells
        int count = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (grid[i][j] == 0)
                    count++;
        
        return count;
    }
};
