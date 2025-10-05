#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], b[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b, b+n);
        int left=INT_MAX, right=INT_MAX;
        for(int i=0; i<n; i++){
            if(a[i]!=b[i]){
                if(left<i){
                    right=i;
                    continue;
                }
                left=i;
                right=i;
            }
        }
        cout<<left+1<<" "<<right+1<<endl;
    }
}