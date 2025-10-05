#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a;
        cin >> a;
        long long b=0;
        long long num=a;
        while(a!=0){
            int mod=a%10;
            b=b*10 +mod;
            a/=10;
        }
        if(num==b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}