#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;

using ll = long long int;


ll modpow (ll x, ll n, ll m){           /// x^n (mod m)
    if(n == 0)
        return 1;

    if(n % 2 == 0){
        ll y = (x * x) % m;
        return modpow(y, n/2, m);
    }
    else {
        ll y = (x * x) % m;
        return (modpow(y, n/2, m) * x) % m;
    }
}


int main(){

    int inv2 = modpow(2, m-2, m);

    int n = 9;


    /// n * (n+1) / 2;

    int m = 25;


    int ans = (n * (n+1)) % m;



    ans = (ans * inv2) % m;

    cout<<ans<<endl;

    return 0;
}



