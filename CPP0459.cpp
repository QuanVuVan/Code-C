#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[93];

void solve(){
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i<=93; i++){
        a[i] = a[i-1] + a[i-2];
    }
}

int main(){
    solve();
    int t; cin>>t;
    while(t--){
        int start, end;
        cin>>start>>end;
        for(int i = start; i<=end; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}