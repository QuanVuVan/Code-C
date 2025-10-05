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
        int a, b;
        cin>>a>>b;
        int count=0;
        for(int i=a; i<=b; i++){
            if(prime(i)){
                count++;
            }
        }
        cout<<count<<endl;
    }
}