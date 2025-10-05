#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore(1);
    while(t--){
        string s;
        getline(cin, s);
        bool last=false;    
        bool rev=true;
        if(s[s.size()-1]%2==0){
            last=true;
        }
        for(int i=0; i<=(s.size()-1)/2; i++){
            if(s[i]!=s[s.size()-1-i]){
                rev=false;
                break;
            }
            else rev=true;
        }
        if(rev&&last) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}