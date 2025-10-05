#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    bool a[100]={false};
    for(int i=0; i<s.size(); i++){
        s[i]=tolower(s[i]);
        if(s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i'){
            a[s[i]-'0']=true;
        }
    }
    for(int i=0; i<s.size(); i++){
        if(!a[s[i]-'0']){
            cout<<"."<<s[i];
        }
    }
}