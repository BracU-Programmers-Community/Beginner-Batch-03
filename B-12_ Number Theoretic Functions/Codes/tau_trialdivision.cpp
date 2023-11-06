#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

vector<ll> tau(ll n){
    vector<ll> result;
    for(ll i= 1; i*i <= n; i++){
        if(n % i == 0){
            if(i == n/i){
                result.push_back(i);
            }
            else {
                result.push_back(i);
                result.push_back(n/i);
            }
        }
    }

    sort(result.begin(), result.end());

    return result;
}


int main(){
    ll n = 10000000000;

    auto v = tau(n);

    for(auto x : v){
        cout<<x<<endl;
    }
}
