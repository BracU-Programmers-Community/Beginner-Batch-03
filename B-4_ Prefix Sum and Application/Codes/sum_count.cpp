#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> input(n);


    for(int i = 0; i<n ;i++){            /// O(n)
        cin>>input[i];
    }


    vector<long long int> P(n);

    P[0] = input[0];

    for(int i = 1; i<n; i++){            /// O(n)
        P[i] = input[i] + P[i-1];
    }


    int target;
    cin>>target;

    /// P[r] - P[l-1] = target

    /// P[-1] = 0


    map<int, int> mp;       /// mp[x] = count of x
    mp[0]++;


    long long int ans = 0;
    for(int r = 0; r<n; r++){       /// O(n)
        int X = P[r] - target;

        if(mp.count(X) == 0)    /// O(log n)
            ;
        else{
            ans += mp[X];  /// O(log n)
        }


        mp[P[r]]++;   /// O(log n)
    }

    cout<<ans<<endl;

}
    /// O(n log n)
