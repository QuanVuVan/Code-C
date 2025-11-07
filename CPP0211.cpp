#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int max_current = INT_MIN;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(a[i] <= a[j]){
                    if(j - i > max_current){
                        max_current = j - i;
                    }
                }
            }
        }
        cout<<max_current;
    }
}