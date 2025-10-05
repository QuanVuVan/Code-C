#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a;
        cin >> a;
        long long sum= a*(a+1)/2;
        cout << sum<< endl;
    }
    return 0;
}