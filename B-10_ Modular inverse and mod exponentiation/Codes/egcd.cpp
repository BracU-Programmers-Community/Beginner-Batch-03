

#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;

using ll = long long int;


/// reference
int egcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = egcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}



int main(){


    int a = 5;
    int b = 25;

    int m = 25;


    int x, y;


    int g = egcd(a, b, x, y);


    if(g != 1){
        cout<<"wrong values"<<endl;
        return -1;
    }


    cout<<a<<"*"<<x<<" + "<<b<<"*"<<y<<" = "<<g<<endl;


    int inv2 = x % m;
    if(inv2 < 0)
        inv2 += m;


    cout<<(2*inv2) % m<<endl;

    return 0;
}



