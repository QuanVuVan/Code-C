#include <bits/stdc++.h>
using namespace std;

int cnt[10000];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cnt[a[i]]=0;
        }
        for(int i=0; i<n; i++){
            cnt[a[i]]++;
        }
        int sum=0;
        for(int i=0; i<n; i++){
            if(cnt[a[i]]>=2){
                sum+=cnt[a[i]];
                cnt[a[i]]=0;
            }
        }
        cout<<sum<<endl;
    }
}