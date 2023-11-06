#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    /// O(n^3)
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            for(int k = 0; k<j; k++){
                cout<<1<<endl;
            }
        }
    }

}
