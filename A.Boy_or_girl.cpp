#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    bool a[100]={false};
    int count=0;
    for(int i=0; i<s.size(); i++){
        if(!a[s[i]-'0']){
            a[s[i]-'0']=true;
            count++;
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else cout<<"IGNORE HIM!"<<endl;
}