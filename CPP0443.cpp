#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n-1];
        for(int i=0; i<n-1; i++){
            cin>>a[i];
        }
        int expect=1;
        for(int i=0; i<n-1; i++){
            if(expect==a[i]){
                expect++;
            }
        }
        cout<<expect<<endl;
    }
}