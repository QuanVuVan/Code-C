#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int x=0;
        while(n%2==0){
            x++;
            n/=2;
        }
        if(x) cout<<2<<" "<<x<<endl;
        ll i=3;
        while(i<=sqrt(n)){
            int a=0;
            while(n%i==0){
                a++;
                n/=i;
            }
            if(a>0){
                cout<<i<<" "<<a<<endl;
            }
            i+=2;
        }
        if(n>2){
            cout<<n<<" "<<1<<endl;
        }
        cout<<endl;
    }
}