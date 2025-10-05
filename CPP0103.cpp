#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int t;
    cin >> t;
    double sum=0;
    for(int i = 1; i <= t; i++){
        sum += (double)1/i;
    }
    cout << fixed << setprecision(4) << sum << endl;
    return 0;
}
