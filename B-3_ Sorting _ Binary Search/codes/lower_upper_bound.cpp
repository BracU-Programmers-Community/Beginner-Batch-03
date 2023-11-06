#include <bits/stdc++.h>
using namespace std;

int arr[] = {1, 2, 3, 4};

int main(){
    vector<int> v {10, 10, 30, 30, 30, 50, 50, 60, 70, 80, 200};

    auto it1 = lower_bound(v.begin(), v.end(), 35);
    auto it2 = upper_bound(v.begin(), v.end(), 35);

    int index1 = it1 - v.begin();
    int index2 = it2 - v.begin();

    cout<<index1<<endl;
    cout<<index2<<endl;

    cout<<it2-it1<<endl;


    return 0;
}




