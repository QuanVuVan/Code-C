#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        int check=0;
        int sum_now=0, num=0;
        for(int i=0; i<n; i++){
            sum_now+=a[i];
            int sum_2=sum-(sum_now+a[i+1]);
            if(sum_now==sum_2){
                // cout<<sum_now<<endl;
                // cout<<sum_2<<endl;
                check=1;
                num=i+2;
                break;
            }
        }   
        if(!check) cout<<"-1"<<endl;
        else cout<<num<<endl;
    }
}