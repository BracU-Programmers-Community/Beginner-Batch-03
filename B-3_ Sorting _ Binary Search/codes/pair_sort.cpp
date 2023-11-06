#include <bits/stdc++.h>
using namespace std;

int main(){


    int n;
    cin>>n;

    vector<  pair<int, int>  > v(n);


    for(int i = 0; i<n; i++){
        int x;
        cin>>x;

        v[i]=make_pair(x, i);
    }


    sort(v.begin(), v.end());


    for(int i = 0; i<v.size(); i++){
        pair<int, int> p = v[i];
        cout<<p.first<<" "<<p.second<<endl;
    }



    return 0;
}

