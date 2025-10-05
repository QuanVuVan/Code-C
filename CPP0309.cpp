#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore(1);
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        int count=0;
        while(ss >> tmp){
            count++;
        }
        cout<<count<<endl;
    }
}