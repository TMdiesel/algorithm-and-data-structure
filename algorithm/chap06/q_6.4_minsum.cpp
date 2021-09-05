#include <bits/stdc++.h>
using namespace std;
const int INF = 20000;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> a(N), b(N);
    for(int i = 0; i < N; i++) {
        cin >> a[i] >> b[i];
    }

    sort(b.begin(), b.end());
    b.push_back(INF);

    int minval;
    for(int i = 0; i < N; i++) {
        auto iter = lower_bound(b.begin(), b.end(), K - a[i]);
        int val = *iter;
        if(a[i] + val < minval) {
            minval = a[i] + val;
        }
    }
    cout << minval << endl;
}
