#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll sigma(ll n){
    ll result = 0;
    for(ll i= 1; i*i <= n; i++){
        if(n % i == 0){
            if(i == n/i){
                result += i;
            }
            else {
                result += i;
                result += n/i;
            }
        }
    }

    return result;
}

/// O(sqrt(n))

int main(){

    int x = 1000000000+7;

    auto sum = sigma(x);

    cout<<sum<<endl;

    return 0;
}
