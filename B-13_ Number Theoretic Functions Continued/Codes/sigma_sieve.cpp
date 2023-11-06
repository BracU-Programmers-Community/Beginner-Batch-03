#include <bits/stdc++.h>
using namespace std;

int tau[110];
int sigma[110];

vector<int> divisors[110];  /// high memory usage, time usage

void precal() {
    for(int i = 1; i<=100; i++){        /// represents all divisors
        for(int m = i; m <=100; m+=i){  /// represetns all multiples
            tau[m]++;
            sigma[m] += i;
            divisors[m].push_back(i);
        }
    }
}

/// O(n log n)


int main(){
    precal();

    cout<<sigma[60]<<endl;
}


