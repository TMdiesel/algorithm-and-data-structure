#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    int count=0;
    bool finished=false;
    vector<int> vec(N);

    for(int i=0;i<N;i++){
        cin >> vec.at(i);
    }

    while(true){
        for(int i=0;i<N;i++){
            if(vec.at(i)%2==1){
                finished = true;
                break;  
            }
            vec.at(i)/=2;
        }
        if(finished){
            break;
        }
        count++;
    }
    cout << count << endl;
}