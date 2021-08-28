#include <bits/stdc++.h>
using namespace std;
 
int sum(int n) {
  if (n == 0) {
    return 2;
  }
  else if (n==1)
  {
    return 1;
  }
 
  int64_t s = sum(n - 1)+sum(n-2);
  return s;
}

int main() {
    int N;
    cin >> N;
    int64_t answer=sum(N);
    cout << answer << endl;
}