#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool prime(ll a){
    if(a<2) return false;
    for(ll i=2; i*i<=a; i++){
        if(a%i==0) return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a;
        cin>>a;
        int count=0;
        for(ll i=2; i<=sqrt(a); i++){
            if(prime(i)){
                count++;
            }
        }
        cout<<count<<endl;
    }
}