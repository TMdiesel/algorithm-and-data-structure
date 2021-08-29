#include <iostream>
#include <vector>
using namespace std;
const int INF = 20000;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> a(N), b(N);
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < N; i++) {
        cin >> b[i];
    }

    // linear search method
    int minval = INF;
    int sum;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            sum = a[i] + b[j];
            if(sum < K) {
                continue;
            }
            if(sum < minval) {
                minval = sum;
            }
        }
    }

    cout << minval << endl;
}
