#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long num;
        cin>>num;
        int digits[18];
        int count=0;
        while(num!=0){
            int mod=num%10;
            digits[count++]=mod;
            num/=10;
        }
        for(int i=count-1; i>=0; i--){
            if(digits[i]==0&&digits[i-1]==8&&digits[i-2]==4){
                digits[i]=digits[i-1]=digits[i-2]=-1;
            }
        }
        for(int i=count-1; i>=0; i--){
            if(digits[i]>=0){
                cout<<digits[i];
            }
        }
        cout<<endl;
    }
}