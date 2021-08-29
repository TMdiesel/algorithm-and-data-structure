#include <iostream>
#include <vector>
using namespace std;

template <class T> void chmax(T &a, T b) {
    if(a < b) {
        a = b;
    }
}

int main() {
    int N, W;
    cin >> N >> W;
    vector<long long> w(N), v(N);
    for(int i = 0; i < N; i++) {
        cin >> w[i] >> v[i];
    }

    vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));

    for(int i = 0; i < N; i++) {
        for(int j = 0; j <= W; j++) {
            // i番目の品物を選ぶ
            if(j - w[i] >= 0) {
                chmax(dp[i + 1][j], dp[i][j - w[i]] + v[i]);
            }

            // i番目の品物を選ばない
            chmax(dp[i + 1][j], dp[i][j]);
        }
    }
    cout << dp[N][W] << endl;
}
