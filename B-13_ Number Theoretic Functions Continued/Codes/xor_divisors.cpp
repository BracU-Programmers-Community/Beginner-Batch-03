#include <bits/stdc++.h>
using namespace std;

/// f(1) = 10    [done]
/// f(n) = xor of all f(d) where d is a divisor of n (d != n)  [done]

int f[110];

void precal() {
    f[1] = 10;
    for(int i = 1; i<=100; i++){        /// represents all divisors
        for(int m = i; m <=100; m+=i){  /// represetns all multiples
            /// divisor, multiple
            if(m != i)
                f[m] ^= f[i];
        }
    }
}

/// O(n log n)


int main(){
    precal();

    for(int i = 1; i<=10; i++)
        cout<<f[i]<<endl;
}



