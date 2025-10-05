#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[10000], b[10000];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<m; i++){
            cin>>b[i];
        }
        int count=n;
        int i = 0;
        while(i < m){
            a[count++] = b[i++];
        }
        int c[100000], dem=0;
        for(int i=0; i<count; i++){
            int check=1;
            for(int j=0; j<dem; j++){
                if(a[i]==c[j]){
                    check=0;
                    break;
                }
            }
            if(check){
                c[dem++]=a[i];
            }
        }
        for(int i=0; i<dem; i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i]==b[j]){
                    cout<<a[i]<<" ";
                }
            }
        }
        cout<<endl;
    }
}