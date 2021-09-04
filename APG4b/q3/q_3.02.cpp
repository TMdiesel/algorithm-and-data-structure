#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int a, b;
    vector<pair<int, int>> p;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> a >> b;
        p.push_back(make_pair(b, a));
    }
    sort(p.begin(), p.end());
    for(pair<int, int> x : p) {
        tie(b, a) = x;
        cout << a << " " << b << endl;
    }
}
