#include <iostream>
#include <vector>
using namespace std;

int main() {
    string S;
    cin >> S;
    int N = S.size();

    int sum = 0;
    for(int bit = 0; bit < (1 << (N - 1)); bit++) {
        int element = 0;
        for(int i = 0; i < N - 1; i++) {
            element *= 10;
            element += S[i] - '0'; //- '0' to convert char to int

            if(bit & (1 << i)) {
                sum += element;
                element = 0;
            }
        }
        element *= 10;
        element += S[N - 1] - '0';
        sum += element;
    }

    cout << sum << endl;
}