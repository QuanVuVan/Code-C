#include <bits/stdc++.h>
using namespace std;

int main(){
    int a; cin>>a;
    int num = 1;
    for(int i=1; i<=a; i++){
        if(i%2==0){
            if(i==a){
                cout<<"I love it"<<" ";
            }
            else cout<<"I love that"<<" ";
        }
        else{
            if(i==a){
                cout<<"I hate it"<<" ";
            }
            else cout<<"I hate that"<<" ";
        }
    }
}