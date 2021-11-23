#include <bits/stdc++.h>
using namespace std;

// 区間[left, right)のマージソート
void MergeSort(vector<int> &a, int left, int right) {
    if(left == right - 1) {
        return;
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }
    MergeSort(a, 0, N);
}
