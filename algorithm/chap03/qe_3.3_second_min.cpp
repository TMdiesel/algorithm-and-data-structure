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
    int second_minval = INF;
    for(int i = 0; i < N; ++i) {
        if(a[i] < minval) {
            second_minval = minval;
            minval = a[i];
        } else if(a[i] < second_minval) {
            second_minval = a[i];
        }
    }

    cout << second_minval << endl;
}