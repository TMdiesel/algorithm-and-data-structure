#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<long long>> dp(N, vector<long long>(N, INF));
    for(int e = 0; e < M; e++) {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        dp[a][b] = w;
    }
    for(int v = 0; v < N; v++) {
        dp[v][v] = 0;
    }

    // froyd
    for(int k = 0; k < N; k++) {
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}
