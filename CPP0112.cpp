#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;
typedef double db;

int main(){
    int t;
    cin>>t;
    while(t--){
        db a, b, c, d;
        cin>>a>>b>>c>>d;
        db sum=sqrt((a-c)*(a-c)+(b-d)*(b-d));
        cout << fixed << setprecision(4) << sum<<endl;
    }
}