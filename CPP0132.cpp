#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[100], count=0;
        for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
            }
            a[count++]=i;
        }
        }
        if(n>1){
            a[count++]=n;
        }
        cout<<a[count-1]<<endl;
    }
}