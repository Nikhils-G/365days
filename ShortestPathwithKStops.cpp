#include <bits/stdc++.h>
using namespace std;

typedef tuple<int, int, int> tii;
const int INF = 1e9;

int shortestPath(int N, vector<vector<pair<int, int>>>& adj, int K) {
    vector<vector<int>> dist(N + 1, vector<int>(K + 2, INF));
    queue<tii> q;
    
    dist[1][0] = 0;
    q.push({0, 1, 0});

    while (!q.empty()) {
        auto [cost, node, stops] = q.front();
        q.pop();

        if (stops > K) continue;

        for (auto [next, weight] : adj[node]) {
            if (dist[next][stops + 1] > cost + weight) {
                dist[next][stops + 1] = cost + weight;
                q.push({dist[next][stops + 1], next, stops + 1});
            }
        }
    }

    int ans = *min_element(dist[N].begin(), dist[N].end());
    return (ans == INF) ? -1 : ans;
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<pair<int, int>>> adj(N + 1);
    for (int i = 0; i < M; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }

    cout << shortestPath(N, adj, K) << endl;
    return 0;
}
