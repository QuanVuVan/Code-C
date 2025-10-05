#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int count=0;
        int check=0;
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                while(n%i==0){
                    n/=i;
                    count++;
                    if(count==k){
                        cout<<i<<endl;
                        check=1;
                        break;
                    }
                }
            }
            if(check) break;        
        }
        if(n>1){
            count++;
            if(count==k){
                cout<<n<<endl;
                check=1;
            }
        }
        if(!check){
            cout<<"-1"<<endl;
        }
    }
}