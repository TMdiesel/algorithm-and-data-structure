#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, A;
  cin >> N >> A;
  
  for(int i=1;i<=N;i++){
    string op;
    int B;
    cin >> op >> B;
    if(op=="+"){
        A+=B;
    }
    if(op=="*"){
        A*=B;
    }
    if(op=="/"){
        if(B==0){
          cout << "error" << endl;
          break;
        }
        else{
          A/=B;
        }
    }
    if(op=="-"){
        A-=B;
    }
    cout << i << ":" << A << endl;
  }
}