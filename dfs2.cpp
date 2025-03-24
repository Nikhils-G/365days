#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<vector<int>>& adj, vector<int>& visited) {
    if (visited[node] == 1) return true;
    if (visited[node] == 2) return false;

    visited[node] = 1;
    for (int neighbor : adj[node])
        if (dfs(neighbor, adj, visited)) return true;
    
    visited[node] = 2;
    return false;
}

int main() {
    int N, M, u, v;
    cin >> N >> M;
    vector<vector<int>> adj(N + 1);
    vector<int> visited(N + 1, 0);

    while (M--) {
        cin >> u >> v;
        adj[u].push_back(v);
    }

    for (int i = 1; i <= N; i++)
        if (!visited[i] && dfs(i, adj, visited)) {
            cout << "Cycle detected\n";
            return 0;
        }

    cout << "No cycle\n";
}
