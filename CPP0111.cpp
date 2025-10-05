#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[18];
        long long n;
        cin>>n;
        int count=0;
        while(n!=0){
            int mod=n%10;
            a[count++]=mod;
            n/=10;
        }
        int check=1;
        for(int i=0; i<count-1; i++){
            if(abs(a[i]-a[i+1])!=1){
                check=0;
                break;
            }
        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        for(int i=0; i<count; i++){
            a[i]=0;
        }
    }
}