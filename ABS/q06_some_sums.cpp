#include <bits/stdc++.h>
using namespace std;

int digit_sum(int n){
    int sum=0;
    for(int j=0;j<5;j++){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main() {
    int N,A,B;
    int count=0 ;
    int d_sum;
    int summation=0;
    cin >> N >> A >> B ;
    for(int i=1;i<=N;i++){
        d_sum=digit_sum(i);
        if(A<=d_sum && d_sum<=B){
            summation+=i;
        }
    }
    cout << summation << endl;
}