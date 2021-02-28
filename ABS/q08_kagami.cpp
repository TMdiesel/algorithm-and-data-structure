#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    int count=N;
    vector<int> vec(N);
    for(int i=0;i<vec.size();i++){
        cin >> vec.at(i);
    }

    sort(vec.begin(),vec.end());
    for(int i=1;i<vec.size();i++){
        if(vec.at(i)==vec.at(i-1)){
            count-=1;
        }
    }
    cout << count << endl;
}