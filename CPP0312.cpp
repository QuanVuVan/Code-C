#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore(1);
    while(t--){
        string s;
        getline(cin, s);
        int k;
        cin>>k;
        cin.ignore(1);
        int cnt[300]={0};
        for(int i=0; i<s.size(); i++){
            cnt[s[i]]++;
        }
        int count=0;
        for(int i=0; i<s.size(); i++){
            if(cnt[s[i]]>0){
                count++;
                cnt[s[i]]=0;
            }
        }
        if(s.size()<26){
            cout<<"0"<<endl;
        }
        else if(s.size()>=26){
            if(26<=count+k){
                cout<<"1"<<endl;
            }
            else cout<<"0"<<endl;
        }
    }
}