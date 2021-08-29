#include <iostream>
#include <vector>
using namespace std;
const int INF = 20000000;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    int minval = INF;
    int maxval = -INF;
    for(int i = 0; i < N; ++i) {
        if(a[i] < minval) {
            minval = a[i];
        }
        if(a[i] > maxval) {
            maxval = a[i];
        }
    }

    cout << maxval - minval << endl;
}