#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        int num=0;
        while(a!=0){
            int mod1 = a%10;
            a/=10;
            int mod2 = a%10;
            num = mod2*10 + mod1;
            break;
        }
        if(num==86) cout << "1" <<endl;
        else cout << "0" << endl;
    }
    return 0;
}
