#include <bits/stdc++.h>
using namespace std;

/// 'a' 'b' 'c'
/// 93  94  95

/// c+93

/// c= 0  c+93 = 93
/// c = 1  c+93 = 94
/// c = 2  c+93 = 95


/// map<char, int> mpctoi = {{'a', 0}, {'b', 1}, {'c', 2}}
/// map<int, char> mpitoc = {{0, 'a'}, {1, 'b'}, {2, 'c'}}



int main(){
    int n;
    cin>>n;

    vector<int> input(n);


    for(int i = 0; i<n ;i++){            /// input contains only 0, 1, 2
        cin>>input[i];
    }


    vector<int> P[3];

    P[0].resize(n);
    P[1].resize(n);
    P[2].resize(n);


    for(int c = 0; c<=2; c++){
        if(input[0] == c)
            P[c][0] = 1;
        else
            P[c][0] = 0;


        for(int i = 1; i<n; i++){
            if(input[i] == c)
                P[c][i] = P[c][i-1] + 1;
            else
                P[c][i] = P[c][i-1] + 0;
        }
    }

    int q;
    cin>>q;

    for(int i = 0; i<q; i++){
        int x;
        cin>>x;

        int l, r;
        cin>>l>>r;

        if(l == 0)
            cout<<P[x][r];
        else
            cout<<P[x][r] - P[x][l-1];
    }

}
    /// O(n log n)

