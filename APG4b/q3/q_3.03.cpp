#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    map<int, int> num_count;
    for(int i = 0; i < N; i++) {
        if(num_count.count(A[i])) {
            num_count[A[i]]++;
        } else {
            num_count[A[i]] = 1;
        }
    }

    int max_count = 0;
    int max_key;
    for(auto num_count : num_count) {
        auto key = num_count.first;
        auto value = num_count.second;
        if(value > max_count) {
            max_key = key;
            max_count = value;
        }
    }

    cout << max_key << " " << max_count << endl;
}
