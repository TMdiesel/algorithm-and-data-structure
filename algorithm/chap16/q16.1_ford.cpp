#include <bits/stdc++.h>
using namespace std;

struct Graph {
    struct Edge {
        int rev, from, to, cap;
        Edge(int r, int f, int t, int c) : rev(r), from(f), to(t), cap(c) {}
    };
    vector<vector<Edge>> list;
    Graph(int n) : list(n) {}

    size_t size() { return list.size(); }

    vector<Edge> &operator[](int i) { return list[i]; }

    // 逆辺
    Edge &redge(const Edge &e) { return list[e.to][e.rev]; }

    void run_flow(Edge &e, int f) {
        e.cap -= f;
        redge(e).cap += f;
    }

    void addedge(int from, int to, int cap) {
        int fromrev = (int)list[from].size();
        int torev = (int)list[to].size();
        list[from].push_back(Edge(torev, from, to, cap));
        list[to].push_back(Edge(fromrev, to, from, 0));
    }
};

struct FordFulkerson {
    static const int INF = 1 << 30;
    vector<int> seen;

    FordFulkerson() {}

    // 深さ優先探索でv-tパスを見つける
    // f: s-vパスの流量
    int fodfs(Graph &G, int v, int t, int f) {
        if(v == t)
            return f;

        seen[v] = true;
        for(auto &e : G[v]) {
            if(seen[e.to]) {
                continue;
            }
            if(e.cap == 0) {
                continue;
            }
            int flow = fodfs(G, e.to, t, min(f, e.cap));
            if(flow > 0) {
                G.run_flow(e, flow);
                return flow;
            }
        }
        return 0;
    }

    // s-tパスの最大流量を求める
    int solve(Graph &G, int s, int t) {
        int res = 0;
        while(true) {
            seen.assign((int)G.size(), 0);
            int flow = fodfs(G, s, t, INF);
            if(flow == 0)
                return res;
            res += flow;
        }
        return 0;
    }
};

int main() {
    int N, M;
    cin >> N >> M;

    Graph G(N);
    for(int i = 0; i < M; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        G.addedge(u, v, c);
    }

    FordFulkerson ff;
    int s = 0;
    int t = N - 1;
    cout << ff.solve(G, s, t) << endl;
}
