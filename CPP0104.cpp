#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    long long sum=0;
    long long product =1;
    for(int i=1; i<=t; i++){
        product*=i;
        sum+= product;
    }
    cout << sum << endl;
    return 0;
}