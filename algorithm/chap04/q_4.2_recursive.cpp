#include <iostream>
#include <vector>
using namespace std;

int func(int N) {
    if(N == 0)
        return 0;
    int result = N + func(N - 1);
    cout << result << endl;
    return result;
}

int main() { func(5); }
