#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v(5);
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;
    v[3] = 40;
    v[4] = 50;
//
    vector<int>::iterator it = v.begin();       /// the first iterator
//
    it += 3;
//
    cout<< *it <<endl;
//
    vector<int>::iterator it2 = v.end();

    it2 -= 1;
//
    cout<< *it2 <<endl;
//
//
    reverse(v.begin()+1, v.begin()+4);      /// O(n)
//
    for(int x : v){
        cout<<x<<endl;
    }
//

    vector<int> w(5);

    w[0] = 100;
    w[1] = 50;
    w[2] = 25;
    w[3] = 300;
    w[4] = 75;

    sort(w.begin(), w.end());   /// O(n log n)

    cout<<endl;
    for(int x: w){
        cout<<x<<endl;
    }


    return 0;
}



