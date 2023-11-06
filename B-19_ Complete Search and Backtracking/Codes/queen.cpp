#include <bits/stdc++.h>
using namespace std;

bool used[100];
int cnt = 0;

/// O(n * n!) -> n <= 11
/// pruning
void recurse(vector<int> &v, int index, int endindex){
    int n = endindex - 1;

    if(index == endindex){

        for(int x : v){
            cout<<x << " ";
        }
        cout<<"\n";
        cnt++;
        return;
    }

    for(int i = 1; i<=n; i++){

        bool attacked = false;

        /// loop
        for(int j = 0; j<v.size(); j++){
            if(j-v[j] == (index-1)-i)
                attacked = true;
            if(j+v[j] == (index-1)+i)
                attacked = true;
        }

        bool duplicate = used[i];

        if(duplicate || attacked)
            continue;

        v.push_back(i);
        used[i] = true;
        recurse(v, index+1, endindex);
        v.pop_back();
        used[i] = false;
    }


    return;
}

/// 8 queen problem


int main(){

    int n = 8;

    vector<int> v;
    recurse(v, 1, n+1);

    cout<<cnt<<endl;
    return 0;
}


