#include <bits/stdc++.h>
using namespace std;

bool isBipartite(int N, vector<vector<int>>& adj) {
    vector<int> color(N + 1, -1);
    
    for (int start = 1; start <= N; start++) {
        if (color[start] != -1) continue;
        
        queue<int> q;
        q.push(start);
        color[start] = 0;
        
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (int neighbor : adj[node]) {
                if (color[neighbor] == -1) {
                    color[neighbor] = 1 - color[node];
                    q.push(neighbor);
                } else if (color[neighbor] == color[node]) {
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    int N, M, u, v;
    cin >> N >> M;
    vector<vector<int>> adj(N + 1);

    while (M--) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << (isBipartite(N, adj) ? "Yes" : "No") << endl;
}
