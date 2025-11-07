#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<int> a, b;
        set<int> x, y;
        for(int i=0; i<n; i++){
            int num; cin>>num;
            a.push_back(num);
            x.insert(num);
        }
        for(int i=0; i<m; i++){
            int num2; cin>>num2;
            b.push_back(num2);
            y.insert(num2);
        }
        set<int> f(x.begin(), x.end());
        for(int c : y){
            if(x.find(c) == x.end()){
                x.insert(c);
            }
        }
        for(int c : x){
            cout<<c<<" ";
        }
        cout<<endl;
        set<int> g;
        for(int c : f){
            if(y.find(c) != y.end()){
                g.insert(c);
            }
        }
        for(int c : g){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}