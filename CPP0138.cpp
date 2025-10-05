#include <iostream>
using namespace std;

bool prime(int a){
    if(a<2) return false;
    for(int i=2; i*i<=a; i++){
        if(a%i==0) return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int check=0;
        for(int i=2; i*i<=a; i++){
            if(prime(i)&&prime(a-i)){
                cout<<i<<" "<<a-i;
                check=1;
                break;
            }
        }
        cout<<endl;
    }
}