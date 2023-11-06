#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    map<int, int> mp;   /// mp[x] = count of x

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        if(mp.count(x) > 0){
            cout<<"duplicate "<<mp[x]<<endl;
        }

        mp[x]++;
    }

    return 0;
}







