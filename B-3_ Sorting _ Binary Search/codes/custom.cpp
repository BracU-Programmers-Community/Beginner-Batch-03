#include <bits/stdc++.h>
using namespace std;


bool comp(pair<int, int> p, pair<int, int> q){
    if(1.0*p.first/p.second < 1.0*q.first/q.second)
        return true;
    else
        return false;
}

int main(){


    vector<  pair<int, int>  > v {
        {1, 2}, /// 1/2
        {2, 5}, /// 2/5
        {2, 4}, /// 2/4
        {5, 3}, /// 5/3
    };


    sort(v.begin(), v.end(), comp);


    for(int i = 0; i<v.size(); i++){
        pair<int, int> p = v[i];
        cout<<p.first<<" "<<p.second<<endl;
    }



    return 0;
}


