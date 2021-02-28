#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int count=0;
    string str;
    cin >> str;
    int num=str.size();
    for(int i=0;i<num;i++){
        if(str.at(i)=='1'){
          count++;
        }
    }
    cout << count << endl;

}