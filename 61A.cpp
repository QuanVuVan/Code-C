#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    getline(cin, a);
    getline(cin, b);
    for(int i=0; i<a.size(); i++){
        if(a[i] == '1' && b[i] == '1'){
            cout<<"0";
        }
        else if(a[i] == '0' && b[i] == '0'){
            cout<<"0";
        } 
        else cout<<"1";
    }
}