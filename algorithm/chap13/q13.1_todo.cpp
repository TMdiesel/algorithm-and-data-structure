#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

void search(const Graph &G, int s) {
    int N = (int)G.size();
    vector<bool> seen(N, false);
    queue<int> todo;

    seen[s] = true;
    todo.push(s);

    while(!todo.empty()) {
        int v = todo.front();
        todo.pop();

        for(int x : G[v]) {
            if(!seen[x]) {
                seen[x] = true;
                todo.push(x);
            }
        }
    }
}

int main() {
    int N; // 頂点数
    int M; //辺数
    cin >> N >> M;
    Graph G(N);
    for(int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        //無向グラフ
        G[a].push_back(b);
        G[b].push_back(a);
    }
    search(G, 0);
}
