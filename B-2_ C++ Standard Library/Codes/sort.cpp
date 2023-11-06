#include <bits/stdc++.h>
using namespace std;


int main(){

    vector< pair<int, int> > w(4);
//
    w[0] = make_pair(0, 3);
    w[1] = make_pair(5, 1);
    w[2] = make_pair(-10, -12);
    w[3] = make_pair(5, -1);
//
    sort(w.begin(), w.end());
//
    cout<<endl;
    for(int i = 0; i<w.size(); i++){
        cout<<w[i].first<<" "<<w[i].second<<endl;
    }

    return 0;
}




