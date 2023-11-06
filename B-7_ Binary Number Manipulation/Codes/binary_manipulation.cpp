#include <bits/stdc++.h>
using namespace std;


#include "utils.cpp"

int main(){

    int x = 5;
    int k = 1;


    /// what is bit at index k=1 (0-indexed)

    int mask = (1<<k);
    if((mask & x) == 0){
        cout<<"kth bit is 0"<<endl;
    }
    else{
        cout<<"kth bit is 1"<<endl;
    }

    cout<<binary(x)<<endl;


    int x = 5;
    int k = 1;

    /// get y = x with (k=1)th bit turned to 0

    int mask = ~(1<<k);
    int y = x & mask;
    cout<<y<<endl;
    cout<<binary(y)<<endl;



    int x = 7;
    int k = 1;

    /// get y = x with (k=1)th bit turned to 1

    int mask = (1<<k);
    int y = x | mask;
    cout<<y<<endl;
    cout<<binary(y)<<endl;


    int x = 5;
    int k = 1;

    /// get y = x with (k=1)th bit flipped

    int mask = (1<<k);
    int y = x ^ mask;
    cout<<y<<endl;
    cout<<binary(y)<<endl;

    return 0;
}

