#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ucln(ll a, ll b){
   while(b != 0){
      int r = a % b;
      a = b;
      b = r;
   }
   return a;
}

ll bcnn(ll a, ll b){
    return a*b/ucln(a,b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, z;
        cin>>x>>y>>z;
        int n;
        cin>>n;
        ll start = 1;
        for (int i = 1; i < n; i++) start *= 10;
        ll end = start * 10 - 1;
        ll l=bcnn(bcnn((ll)x,(ll)y),(ll)z);
        ll result=(start+l-1)/l*l;
        if(result<=end) cout<<result<<endl;
        else cout<<"-1"<<endl;
    }
}