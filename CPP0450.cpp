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
        int num=-1;
        bool found=false;
        bool appeared[1000001];
        memset(appeared, false, sizeof(appeared));
        for(int i=0; i<n; i++){
            int current=a[i];
            if(appeared[current]){
                num=current;
                found=true;
                break;
            }
            appeared[current]=true;
        }
        if(found){
            cout<<num<<endl;
        }
        else cout<<"-1"<<endl;
    }
}