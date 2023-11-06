#include <bits/stdc++.h>
using namespace std;


/// O(n * 2^n)  -> feasible n <= 24
void recurse(vector<int> &v, int index, int endindex){
    if(index == endindex){
        for(int x : v){
            cout<<x << " ";
        }
        cout<<"\n";

        return;
    }


    recurse(v, index+1, endindex);      /// element was not chosen

    v.push_back(index);
    recurse(v, index+1, endindex);      /// element was chosen
    v.pop_back();

    return;
}


int main(){

    int n = 3;

    vector<int> v;
    recurse(v, 1, n+1);


    return 0;
}
