#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    cin.ignore();
    string s; getline(cin, s);
    if(n < 26){
        cout<<"NO";
        return 0;
    }
    set<char> a;
    for(int i=0; i<s.size(); i++){
        s[i] = tolower(s[i]);
        a.insert(s[i]);
    }
    if(a.size() == 26){
        cout<<"YES";
    }
    else cout<<"NO";
}