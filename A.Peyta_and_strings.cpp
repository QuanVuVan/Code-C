#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    getline(cin, a);
    getline(cin, b);
    for(int i=0; i<a.size(); i++){
        a[i]=tolower(a[i]);
    }
    for(int i=0; i<a.size(); i++){
        b[i]=tolower(b[i]);
    }
    cout<<a.compare(b);
}