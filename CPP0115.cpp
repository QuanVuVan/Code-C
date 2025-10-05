#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        for(ll i=2; i<=sqrt(n); i++){
            int cnt=0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            if(cnt) cout<<i<<" "<<cnt<<" "<<endl;
        }
        if(n>1) cout<<n<<" "<<1<<" "<<endl;
        cout<<endl;
    }
    return 0;
}