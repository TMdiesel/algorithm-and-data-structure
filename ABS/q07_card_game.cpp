#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    int a_score=0;
    int b_score=0;
    cin >> N;
    vector<int> vec(N);
    for(int i=0;i<vec.size();i++){
        cin >> vec.at(i);
    }

    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());

    for(int i=0;i<vec.size();i++){
        if(i%2==0){
          a_score+=vec.at(i);
        }
        else{
          b_score+=vec.at(i);
        }
    }

    cout << a_score-b_score << endl;
}