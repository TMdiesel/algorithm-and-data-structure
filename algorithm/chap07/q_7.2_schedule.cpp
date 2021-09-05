#include <bits/stdc++.h>
using namespace std;

using interval = pair<int, int>;

bool cmp(const interval &a, const interval &b) { return a.second < b.second; }

int main() {
    int N;
    cin >> N;
    vector<interval> inter(N);
    for(int i = 0; i < N; i++) {
        cin >> inter[i].first >> inter[i].second;
    }
    sort(inter.begin(), inter.end(), cmp);

    int res = 0;
    int current_end_time = 0;
    for(int i = 0; i < N; i++) {
        if(inter[i].first >= current_end_time)
            continue;
        res++;
        current_end_time = inter[i].second;
    }
    cout << res << endl;
}
