#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int dis;
        cin>>dis;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=dis; i<n; i++){
            cout<<a[i]<<" ";
        }
        for(int i=0; i<dis; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}