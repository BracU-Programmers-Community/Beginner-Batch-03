#include <bits/stdc++.h>
using namespace std;

int tau[110];

vector<int> divisors[110];  /// high memory usage, time usage

void precal() {
    for(int i = 1; i<=100; i++){
        for(int m = i; m <=100; m+=i){
            tau[m]++;
            divisors[m].push_back(i);
        }
    }
}


int main(){
    precal();


    cout<<tau[100]<<endl;
}

