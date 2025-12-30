class Solution {
  public:

    void DFS(int u, vector<vector<int>>& adj,
                 vector<bool>& visited, vector<int>& result) {

        visited[u] = true;
        result.push_back(u);

        for (int v : adj[u]) {
            if (!visited[v]) {
                DFS(v, adj, visited, result);
            }
        }
    }

    vector<int> dfs(vector<vector<int>>& mp) {
        int n = mp.size();
        vector<bool> visited(n, false);
        vector<int> result;

        DFS(0, mp, visited, result);
        return result;
    }
};
