#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> input(n);


    for(int i = 0; i<n ;i++){            /// O(n)
        cin>>input[i];
    }


    vector<int> P(n);

    P[0] = input[0];

    for(int i = 1; i<n; i++){            /// O(n)
        P[i] = input[i] + P[i-1];
    }


    cin>>q;

    for(int i = 0; i<q; i++){           /// O(q)
        int l, int r;
        cin>>l>>r;

        if(l == 0)
            cout<<P[r];
        else
            cout<<P[r] - P[l-1];
    }
}       /// O(n+q)
