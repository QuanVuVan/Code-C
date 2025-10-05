#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        int check=1;
        while(a!=0){
            int mod=a%10;
            if(mod!=0&&mod!=6&&mod!=8){
                check=0;
                cout << "NO" << endl;
                break;
            }
            a/=10;
        }
        if(check) cout << "YES" << endl;
    }
    return 0;
}