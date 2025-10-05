#include <iostream>
using namespace std;

long long UCLN(long long a, long long b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long bcnn(long long a, long long b){
    return a*b/UCLN(a,b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=1;
        for(int i=1; i<=n; i++){
            sum=bcnn(i, sum);
        }
        cout<<sum<<endl;
    }
}