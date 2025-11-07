#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll> a;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        ll min = abs(a[0] - a[1]);
        for(int i=0; i<a.size()-1; i++){
            if(abs(a[i] - a[i+1]) < min){
                min = abs(a[i] - a[i+1]);
            }
        }
        cout<<min<<endl;
    }
}