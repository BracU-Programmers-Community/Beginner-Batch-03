#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

const int mod = 1000000007; /// PRIME
const int nmax = 1000010;   /// maximum n with a bit extra


/// when mod p is prime, modinverse of a = a^(p-2)

/// x^n modulo mod
ll modexpo(ll x, ll n){
    if(n == 0)
        return 1;
    else if(n % 2 == 0){
        return modexpo((x*x) % mod, n/2);
    }
    else{
        return ( modexpo((x*x) % mod, n/2) * x ) % mod;
    }
}


ll fact[nmax];

/// to make this more faster, also precalculate factorial inverses
void precal(){
    fact[0] = 1;
    for(int i = 1; i<nmax; i++){
        fact[i] = (fact[i-1] * i) % mod;        /// n! = n * (n-1)!
    }
}


ll ncr(int n, int r){
    /// TODO
}


ll npr(int n, int r){
    ll ret = fact[n];
    ll inv = modexpo(fact[n-r], mod-2);
    ret = (ret * inv) % mod;
    return ret;
}

int main(){

    /// O(n)
    precal();

    for(int i = 0; i<100; i++){
        int n;
        int r;
        cin>>n>>r;

        /// O(log n)
        cout<<npr(n, r)<<endl;
    }

    return 0;
}
