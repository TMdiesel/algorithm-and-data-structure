#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A,B,C,X;
    int left500,left100;
    int cases=0;
    cin >> A >> B >> C >> X;

    for(int i=0;i<=min(X/500,A);i++){
        left500=X-500*i;
        for(int j=0;j<=min(left500/100,B);j++){
            left100=left500-100*j;
            if(left100/50<=C){
                cases+=1;
            } 
        }
    }
    cout << cases << endl;
}