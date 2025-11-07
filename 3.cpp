#include <bits/stdc++.h>
using namespace std;

bool isvowel(char c){
    c = tolower(c);
    return ( c== 'a' || c== 'e' || c== 'i' || c== 'o' || c== 'u');
}

int main(){
    string s; getline(cin, s);
    for(char c : s){
        c = tolower(c);
    }
    stringstream ss(s);
    string tmp;
    int cnt=0;
    while ( ss >> tmp){
        if(tmp.length() > 3 & isvowel(tmp[0])){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}