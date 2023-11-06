#include <bits/stdc++.h>
using namespace std;

int arr[100];


set<int> generateSums(vector<int> v){
    set<int> sums;
    int n = v.size();

    for(int mask = 0; mask < (1<<n); mask++){
        int sum = 0;

        for(int i = 0; i<n; i++){
            if((mask & (1<<i)) != 0){
                sum += v[i];
            }
        }

        sums.insert(sum);
    }

    return sums;
}


int main(){

    int n;
    cin>>n;

    for(int i = 0; i<n; i++){
       //cin>>arr[i];
       arr[i] = i;
    }

    int x;
    //cin>>x;
    x = 100;

    vector<int> v, w;
    for(int i = 0; i<n/2; i++){
        v.push_back(arr[i]);
    }

    for(int i = n/2; i<n; i++){
        w.push_back(arr[i]);
    }


    set<int> vsums = generateSums(v);
    set<int> wsums = generateSums(w);


    //set<int> st(wsums.begin(), wsums.end());
    /// how to create c++ set from c++ vector


    bool found = false;
    for(int a: vsums){
        if(wsums.count(x-a) > 0)
            found = true;
    }

    if(found)
        cout<<"found"<<endl;



    return 0;
}

