#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    for (int neighbor : adj[node])
        if (!visited[neighbor]) dfs(neighbor, adj, visited);
}

int main() {
    int N, M, u, v, components = 0;
    cin >> N >> M;
    vector<vector<int>> adj(N + 1);
    vector<bool> visited(N + 1, false);

    while (M--) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            dfs(i, adj, visited);
            components++;
        }
    }

    cout << components << endl;
}
