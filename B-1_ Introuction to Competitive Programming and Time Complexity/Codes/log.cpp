#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 100;
    int two_power = 1;

    while(two_power < n)
        two_power *= 2;

    two_power /= 2;

    cout<<two_power;

}

