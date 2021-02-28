#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, C;
  int answer;
  cin >> A >> B >> C;
  answer=max(max(abs(A-B),abs(B-C)),abs(A-C));
  cout << answer << endl;
}