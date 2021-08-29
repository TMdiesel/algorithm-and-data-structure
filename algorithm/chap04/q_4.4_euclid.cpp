#include <iostream>
#include <vector>
using namespace std;

int GCD(int a, int b) {
    if(b == 0)
        return a;
    int gcd = GCD(b, a % b);
    return gcd;
}

int main() {
    cout << GCD(51, 15) << endl;
    cout << GCD(15, 51) << endl;
}
