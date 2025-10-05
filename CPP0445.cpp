#include <bits/stdc++.h>
using namespace std;

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
        sort(a, a+n);
        int count=0, num=-1;
        for(int i=1; i<n; i++){
            if(a[i]>a[0]){
                num=a[i];
                break;
            }
        }
        if(num==-1) cout<<"-1"<<endl;
        else cout<<a[0]<<" "<<num<<endl;
    }
}