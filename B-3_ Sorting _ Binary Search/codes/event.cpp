#include <bits/stdc++.h>
using namespace std;


int main(){


    int n;
    cin>>n;

    vector<pair<int, int>> v;


    for(int i = 0; i<n; i++){
        int st, en;
        cin>>st>>en;
        v.push_back(make_pair(st, -1));  /// enter
        v.push_back(make_pair(en, 1)); /// leave
    }

    sort(v.begin(), v.end());

    int guests = 0;
    int ans = -999;

    for(pair<int, int> e: v){
        if(e.second == 1)
            guests++;
        else
            guests--;

        ans = max(ans, guests);
    }

    cout<<ans<<endl;


    return 0;
}



