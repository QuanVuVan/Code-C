#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int count=0;
        int a[100], b[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>b[i][j];
                a[count++]=b[i][j];
            }
        }
        for(int i=0; i<count; i++){
            for(int j=0; j<count-1; j++){
                if(a[j]>a[j+1]){
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        for(int i=0; i<count; i++){
            if(i==k-1){
                cout<<a[i]<<endl;
                break;
            }
        }
    }
}