#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;      /// prime 1, 2, ..... 10^9+6

int main(){

    long long int n;    /// n can be upto 10^18
    cin>>n;


    /// sum of 1+2+...+n modulo 10^9+7

    /// n*(n+1)/2

    long long int inv2 = (mod+1)/2;


    n %= mod;

    long long int result = (n * (n+1)) % mod;

    result = result * inv2 % mod;       /// inv2 is modular inverse of 2 modulo 10^9+7

    cout<<result<<endl;

    return 0;
}

