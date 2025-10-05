#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int qa;
        cin>>qa;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=1; i<=qa; i++){
            int sum=0;
            int c,d;
            cin>>c>>d;
            for(int j=c-1; j<d; j++){
                sum+=a[j];
            }
            cout<<sum<<endl;
        }
    }
}