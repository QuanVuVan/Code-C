#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a;
        cin>>a;
        while (a % 2 == 0) {
            a /= 2;
            cout << 2 << " ";
        }
        for(int i=3; i*i<=a; i+=2){
            while(a%i==0){
                a/=i;
                cout<<i<<" ";
            }
        }
        if(a>1) cout<<a;
        cout<<endl;
    }
}