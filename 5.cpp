#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        long long even=0, odd=0;
        for(int i=0; i<s.size(); i++){
            if(i % 2==0){
                even += s[i] - '0';
            }
            else odd += s[i] - '0';
        }
        if(abs(even - odd) %11 == 0){
            cout<<"1"<<endl;
        }
        else cout<<"0"<<endl;
    }
}