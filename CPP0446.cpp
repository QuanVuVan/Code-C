#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        ll min=LLONG_MAX;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(abs(a[i]+a[j])<abs(min)){
                    min=a[i]+a[j];
                }
            }
        }
        cout<<min<<endl;
    }
}