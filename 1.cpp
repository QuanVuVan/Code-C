#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    cin.ignore();
    string a;
    int c = 0;
    bool check = true;
    for(int i=0; i<n; i++){
        string l;
        getline(cin, l);
        if(l.empty()){
            if(!a.empty()){
                cout<<a<<": "<<c<<endl;
            }
            check = true;
            c = 0;
        }
        else if(check){
            a = l;
            check = false;
        }
        else{
            c++;
        }
    }
    if(!a.empty()){
        cout<<a<<": "<<c<<endl;
    }
}