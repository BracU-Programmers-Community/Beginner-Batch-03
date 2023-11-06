#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v {10, 20, 15, 20, 30, 5, 10};

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());


    for(int x : v){
        cout<<x<<endl;
    }



    return 0;
}
