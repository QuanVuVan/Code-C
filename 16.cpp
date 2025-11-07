#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll x, int m){
    ll p1;
    if(x >= m-1){
        p1=m-1;
    }
    else{
        ll fact=1;
        for(ll i=1; i<=x+1; i++){
            fact= (fact*i)%m;
        }
        p1=(fact -1 +m)%m;
    }
    ll p2;
    if(m%2!=0){
        ll a = (m+1)/2;
        ll f = x%m;
        ll t1= (f*f)%m;
        ll t2=(f+1)%m;
        ll num=(t1*t2)%m;
        p2= (num*a)%m;
    }
    return (p1+p2)%m;
}

int main(){
    int n,m;
    cin>>n>>m;
    ll s =0;
    for(int i=0; i<n; i++){
        ll a;
        cin>>a;
        s=(s+solve(a,m))%m;
    }
    cout<<s<<endl;
}