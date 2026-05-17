class Solution
{
public:
    bool canReach(vector<int>& arr, int start)
    {
        vector<bool> visited(arr.size(), false);

        return dfs(arr, start, visited);
    }

    bool dfs(vector<int>& arr, int curr, vector<bool>& visited)
    {
        // Out of bounds
        if(curr < 0 || curr >= arr.size())
            return false;

        // Already visited
        if(visited[curr])
            return false;

        // Found value 0
        if(arr[curr] == 0)
            return true;

        // Mark current index as visited
        visited[curr] = true;

        int forward = curr + arr[curr];
        int backward = curr - arr[curr];

        return dfs(arr, forward, visited) || 
               dfs(arr, backward, visited);
    }
};