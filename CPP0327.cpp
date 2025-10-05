#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    cin.ignore(1);
    while(t--){
        string s;
        getline(cin, s);
        ll num=0, dis=1;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]-'0'==1){
                num+=dis;
            }
            dis*=2;
        }
        cout<<num<<endl;
        if(num%5==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}