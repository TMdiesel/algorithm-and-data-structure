#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

//頂点sを始点とした幅優先探索
vector<int> BFS(const Graph &G, int s) {
    int N = (int)G.size();   //頂点数
    vector<int> dist(N, -1); //距離,seenに対応
    queue<int> que;          // todoに対応

    dist[s] = 0;
    que.push(s);

    while(!que.empty()) {
        int v = que.front();
        que.pop();

        for(int x : G[v]) {
            if(dist[x] == -1) {
                dist[x] = dist[v] + 1;
                que.push(x);
            }
        }
    }

    return dist;
}

int main() {
    int N, M;
    cin >> N >> M;

    //無向グラフ
    Graph G(N);
    for(int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<int> dist = BFS(G, 0);
    for(int v = 0; v < N; v++) {
        cout << v << ":" << dist[v] << endl;
    }
}
