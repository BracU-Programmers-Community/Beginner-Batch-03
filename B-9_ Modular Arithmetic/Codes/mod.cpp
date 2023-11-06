#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

int main(){

//    int x = 36; /// 1
//    int y = 18; /// 4
//
//    int a = x % 7;
//    int b = y % 7;
//
//
//    cout<<(a+b)%7<<endl;
//    int temp = (a-b) % 7;
//    if(temp < 0)
//        temp += 7;
//    cout<<temp<<endl;


    long long int x = 1e9 + 5;
    long long int y = 1e9 + 6;

    long long int z = (x*y) % mod;

    cout<<z<<endl;

    return 0;
}
