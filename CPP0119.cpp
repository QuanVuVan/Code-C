#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[10000], count=0;
        for(int i=1; i*i<=n; i++){
            if(n%i==0){
                a[count++]=i;
                if(i!=(n/i)){
                    a[count++]=n/i;
                }
            }
        }
        int dem=0;
        for(int i=0; i<count; i++){
            if(a[i]%2==0){
                dem++;
            }
        }
        cout<<dem<<endl;
    }
}