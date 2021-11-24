#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;

//頂点vから深さ優先探索
void dfs(const Graph &G, int v) {
    seen[v] = true;
    for(auto next_v : G[v]) {
        if(seen[v]) {
            continue;
        }
        dfs(G, next_v);
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    Graph G(N);
    for(int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
    }

    seen.assign(N, false);
    for(int v = 0; v < N; v++) {
        if(seen[v])
            continue;
        dfs(G, v);
    }
}
