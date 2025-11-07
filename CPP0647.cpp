#include <bits/stdc++.h>
using namespace std;

void solve(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i] == '1'){
            if(s[i+1] == '0'){
                if(s[i+2] == '0'){
                    k += 3;
                    s.erase(s.begin() + i, s.begin() + i + 2);
                }
                else{
                    continue;
                }
            }
            else{
                continue;
            }
        }
    }
}


int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        int k=0;
        
    }
}