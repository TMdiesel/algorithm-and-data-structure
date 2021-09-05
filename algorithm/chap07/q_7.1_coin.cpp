#include <bits/stdc++.h>
using namespace std;
const vector<int> coins = {500, 100, 50, 10, 5, 1};

int main() {
    int X;
    cin >> X;

    //枚数制限
    vector<int> a(6);
    for(int i = 0; i < 6; i++) {
        cin >> a[i];
    }

    // 貪欲法
    int result = 0;
    for(int i = 0; i < 6; i++) {
        int add = X / coins[i];
        if(add > a[i])
            add = a[i];
        X -= add * coins[i];
        result += add;
    }
    cout << result << endl;
}
