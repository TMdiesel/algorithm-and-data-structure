#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b;
    cin >> a >> b;
    int product=a*b;
    if(product%2==1){
        cout << "Odd" << endl;
    }
    else{
        cout << "Even" << endl;
    }
}