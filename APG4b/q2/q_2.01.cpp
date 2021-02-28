#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> data(5);
  bool say_yes=false;
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }
 
  for (int i=1; i<5; i++){
      if(data.at(i)==data.at(i-1)){
          cout << "YES" <<endl;
          say_yes=true;
          break;
      }
  }
  if(not say_yes){
        cout << "NO" <<endl;
  }
}