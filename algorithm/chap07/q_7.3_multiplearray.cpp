#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N), b(N);
    for(int i = 0; i < N; i++)
        cin >> a[i] >> b[i];

    int ans = 0;
    for(int i = N - 1; i >= 0; i--) {
        int d;
        int surplus = a[i] % b[i];
        if(surplus == 0) {
            d = 0;
        } else {
            d = b[i] - surplus;
        }
        ans += d;
    }
    cout << ans << endl;
}
