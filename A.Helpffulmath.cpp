#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int a[1000], count=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]!='+'){
            a[count++]=s[i]-'0';
        }
    }
    sort(a, a+count);
    for(int i=0; i<count; i++){
        cout<<a[i];
        if(i<count-1){
            cout<<"+";
        }
    }
}