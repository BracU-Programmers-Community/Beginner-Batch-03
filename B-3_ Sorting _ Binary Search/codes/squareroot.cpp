#include <bits/stdc++.h>
using namespace std;

int main(){


    int lo = 0, hi = 20;


    while(hi >= lo){
        int mid = (lo+hi)/2;

        if(f(mid)){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }

    cout<<hi<<endl;
    cout<<lo<<endl;


    return 0;
}






