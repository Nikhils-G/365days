#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> tin, low;
int timer;

void dfs(int node, int parent) {
    tin[node] = low[node] = ++timer;
    
    for (int neighbor : adj[node]) {
        if (neighbor == parent) continue;
        if (tin[neighbor]) {
            low[node] = min(low[node], tin[neighbor]);
        } else {
            dfs(neighbor, node);
            low[node] = min(low[node], low[neighbor]);
            if (low[neighbor] > tin[node])
                cout << node << " - " << neighbor << " is a bridge\n";
        }
    }
}

int main() {
    int N, M, u, v;
    cin >> N >> M;
    adj.resize(N + 1);
    tin.assign(N + 1, 0);
    low.assign(N + 1, 0);
    timer = 0;

    while (M--) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= N; i++)
        if (!tin[i]) dfs(i, -1);
}
