#include <iostream>
#include <vector>
using namespace std;
template <class T> void chmax(T &a, T b) {
    if(a < b)
        a = b;
}
template <class T> void chmin(T &a, T b) {
    if(a > b)
        a = b;
}

int main() {
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }
    // dp[i][j] := i番目の要素までで部分和がjになるかどうか
    vector<vector<bool>> dp(N, vector<bool>(W + 1, false));
    for(int i = 0; i < N; i++) {
        for(int j = 0; j <= W; j++) {
            if(i == 0) {
                dp[i][a[i]] = true;
            } else {
                if(dp[i - 1][j]) {
                    dp[i][j] = true;
                    dp[i][j + a[i]] = true;
                }
            }
        }
    }
    if(dp[N - 1][W])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
