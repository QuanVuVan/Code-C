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
        bool mark[10] ={false};
        int cnt=0;
        for(int i=0; i<n; i++){
            if(a[i]==0){
                mark[0]=true;
                continue;
            }
            ll num=a[i];
            while(num!=0){
                int mod=num%10;
                mark[mod]=true;
                num/=10;
            }
        }
        for(int i=0; i<10; i++){
            if(mark[i]==true){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}