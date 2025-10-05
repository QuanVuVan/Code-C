#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k, n;
        cin>>k>>n;
        int a[k][n];
        for(int i=0; i<k; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }
        int b[1000], count=0;
        for(int i=0; i<k; i++){
            for(int j=0; j<n; j++){
                b[count++]=a[i][j];
            }
        }
        sort(b, b+count);
        for(int i=0; i<count; i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}