#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, m;
        cin>>a>>m;
        int check=0;
        for(int i=0; i<m; i++){
            int product=a*i;
            if(product%m==1){
                cout<<i<<endl;
                check=1;
                break;
            }
        }
        if(!check) cout<<"-1"<<endl;
    }
}