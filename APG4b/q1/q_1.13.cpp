#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  int sum=0;
  int average;


  for(int i=0;i<N;i++){
      cin >> vec.at(i);
      sum+=vec.at(i);
  }
  average=sum/N;
  for(int i=0;i<N;i++){
      cout << abs(vec.at(i)-average) << endl;
  }
}