#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    getline(cin, a);
    getline(cin, b);
    if(b.size() ==0 || a.size() < b.size()){
        return 0;
    }
    for(int i=0; i<= a.size()-b.size(); i++){
        if(a.compare(i, b.size(), b) == 0){
            cout<<i+1<<" ";
        }
    }
}