#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> v(n);

    for(int i = 0; i<n; i++){
       //cin>>v[i];
       v[i] = i;
    }


    bool found = false;
    for(int mask =0; mask < (1<<n); mask++){

        int sum = 0;
        for(int i = 0; i<n; i++){
            if((mask & (1<<i)) != 0){
                sum -= v[i];
            }
            else{
                sum += v[i];
            }
        }


        if(sum % 360 == 0){
            found = true;


//            for(int i = 0; i<n; i++){
//                if((mask & (1<<i)) != 0){
//                    cout<<"- ";
//                }
//                else{
//                    cout<<"+ ";
//                }
//            }
//            cout<<endl;
        }
    }

    if(found){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }



    return 0;
}

