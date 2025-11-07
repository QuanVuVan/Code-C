#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }
        for(int k=0; k<n+m-1; k++){
            if(k%2==0){
                int i=min(k,n-1);
                int j=k-i;
                while(i>=0 && j<m){
                    cout<<a[i][j]<<" ";
                    i--;
                    j++;
                }
            }
            else{
                int j=min(k, m-1);
                int i=k-j;
                while(i<n && j>=0){
                    cout<<a[i][j]<<" ";
                    i++;
                    j--;
                }
            }
        }
        cout<<endl;
    }
}