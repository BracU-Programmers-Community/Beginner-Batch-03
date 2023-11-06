#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    vector<int> stk;

    bool possible = true;

    for(int i = 0; i<s.size(); i++){
        if(s[i] == '(')
            stk.push_back(i);
        else /// s[i] == ')'
        {
            if(stk.empty()){
                possible = false;
            }
            else{
                cout<<stk.back()<<" "<<i<<endl;
                stk.pop_back();
            }
        }
    }

    if(stk.size() > 0){
        possible = false;
    }


    if(possible){
        cout<<"valid"<<endl;
    }
    else{
        cout<<"invalid"<<endl;
    }



    return 0;
}

