#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        int count=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]<=k){
                count++;
            }
        }
        int door=0;
        for(int i=0; i<n; i++){
            if(a[i]<=k){
                door++;
            }
            else break;
        }
        cout<<count-door<<endl;
    }
}