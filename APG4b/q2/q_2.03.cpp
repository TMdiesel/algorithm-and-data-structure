#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  vector<vector<char>> data(N, vector<char>(N,'-'));
  int winner,loser;

  for(int i=0; i<M; i++){
      winner=A.at(i)-1;
      loser=B.at(i)-1;
      data.at(winner).at(loser)='o';
      data.at(loser).at(winner)='x';
  }

  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
    cout << data.at(i).at(j);
    if(j==N-1){
      cout << endl;
    }
    else{
      cout << " ";
    }
    }
  }
}