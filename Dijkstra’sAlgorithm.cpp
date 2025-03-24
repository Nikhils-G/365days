#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
const int INF = 1e9;

int dijkstra(int N, vector<vector<pii>>& adj) {
    vector<int> dist(N + 1, INF);
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    
    dist[1] = 0;
    pq.push({0, 1});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d > dist[u]) continue;

        for (auto [v, w] : adj[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    return (dist[N] == INF) ? -1 : dist[N];
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<pii>> adj(N + 1);
    for (int i = 0; i < M; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }

    cout << dijkstra(N, adj) << endl;
    return 0;
}
