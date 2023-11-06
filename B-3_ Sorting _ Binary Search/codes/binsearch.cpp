#include <bits/stdc++.h>
using namespace std;

int arr[] = {10, 20, 30, 40, 50, 60, 70};

int main(){

    int target = 25;

    int lo = 0, hi = 6;


    while(hi >= lo){
        int mid = (lo+hi)/2;

        if(arr[mid] == target){
            cout<<"found at "<<mid<<endl;
            break;
        }
        else if(arr[mid] < target){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }


    return 0;
}





