#include <bits/stdc++.h>
using namespace std;

int main(){


    int n;
    cin>>n;

    vector<int> input(n);

    for(int i = 0; i<n; i++){
        cin>>input[i];
    }

    int l = 0;
    set<int> s;
    for(int r = 0; r<input.size(); r++){        /// O(n)
        while(s.count(input[r]) > 0){           /// O(n)
            s.erase(input[l]);                  /// O(log n)
            l++;
        }

        s.insert(input[r]);


        /// report l....r
        cout<<"l, r = "<<l<<","<<r<<endl;
    }


    /// O(n log n)

    return 0;
}
