#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    string s="++X", v="X++";
    string x;
    int sum=0;
    for(int i=1; i<=n; i++){
        getline(cin, x);
        if(x.compare(s)==0||x.compare(v)==0){
            sum+=1;
        }
        else{
            sum-=1;
        }
    }
    cout<<sum<<endl;
}