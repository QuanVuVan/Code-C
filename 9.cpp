#include <bits/stdc++.h>
using namespace std;

struct ThiSinh {
    string name, ns;
    float d1, d2, d3;
};

void nhap(ThiSinh &A){
    getline(cin, A.name);
    getline(cin, A.ns);
    cin>>A.d1>>A.d2>>A.d3;
    if(A.ns[1] == '/'){
        A.ns.insert(0, "0");
    }
    if(A.ns[4] == '/'){
        A.ns.insert(3, "0");
    }
}

void in(ThiSinh &A){
    cout<<A.name<<" "<<A.ns<<" "<<fixed<<setprecision(1)<<A.d1+A.d2+A.d3;
}


int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}