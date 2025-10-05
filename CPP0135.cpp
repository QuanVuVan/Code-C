#include <bits/stdc++.h>
using namespace std;

bool prime(int a){
    if(a<2) return false;
    for(int i=2; i*i<=a; i++){
        if(a%i==0) return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=2; i*i<=n; i++){
            if(prime(i)){
                cout<<i*i<<" ";
            }
        }
        cout<<endl;
    }
}