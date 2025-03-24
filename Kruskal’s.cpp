#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v, w;
    bool operator<(const Edge& other) const {
        return w < other.w;
    }
};

int find(int x, vector<int>& parent) {
    return parent[x] == x ? x : parent[x] = find(parent[x], parent);
}

bool unite(int x, int y, vector<int>& parent, vector<int>& rank) {
    int rootX = find(x, parent);
    int rootY = find(y, parent);
    if (rootX == rootY) return false;

    if (rank[rootX] > rank[rootY]) parent[rootY] = rootX;
    else if (rank[rootX] < rank[rootY]) parent[rootX] = rootY;
    else parent[rootY] = rootX, rank[rootX]++;
    
    return true;
}

int main() {
    int N, M, u, v, w, cost = 0;
    cin >> N >> M;
    vector<Edge> edges(M);
    vector<int> parent(N + 1), rank(N + 1, 0);

    for (int i = 1; i <= N; i++) parent[i] = i;
    for (int i = 0; i < M; i++) cin >> edges[i].u >> edges[i].v >> edges[i].w;
    
    sort(edges.begin(), edges.end());

    for (auto [u, v, w] : edges)
        if (unite(u, v, parent, rank)) cost += w;

    cout << "MST Cost: " << cost << endl;
}
