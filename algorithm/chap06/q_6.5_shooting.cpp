#include <bits/stdc++.h>
using namespace std;
const int INF = 60;

int main() {
    int N;
    cin >> N;
    vector<int> H(N), S(N);
    for(int i = 0; i < N; i++) {
        cin >> H[i] >> S[i];
    }

    //二分探索
    int left = 0, right = INF;
    while(right - left > 1) {
        int mid = (left + right) / 2;
        bool ok = true;
        vector<int> t(N);

        for(int i = 0; i < N; i++) {
            t[i] = (mid - H[i]) / S[i];
        }
        sort(t.begin(), t.end());
        for(int i = 0; i < N; i++) {
            if(t[i] < i)
                ok = false;
        }

        if(ok)
            right = mid;
        else
            left = mid;
    }
    cout << right << endl;
}
