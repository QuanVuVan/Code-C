#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    string a;
    getline(cin, a);
    while(ss >> temp){
        if(a.compare(temp)!=0){
            cout<<temp<<" ";
        }
    }
}