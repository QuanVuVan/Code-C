#include <bits/stdc++.h>
using namespace std;

struct product{
    string name, group;
    double sell, buy, distance;
    int order;
};

void input(product a[], int n){
    cin.ignore();
    for(int i=0; i<n; i++){
        a[i].order = i+1;
        getline(cin, a[i].name);
        getline(cin, a[i].group);
        cin>>a[i].sell>>a[i].buy;
        cin.ignore();
        a[i].distance = abs(a[i].sell - a[i].buy);
    }
}

bool cmp(product &a, product &b){
    return a.distance > b.distance;
}

void compare(product a[], int n){
    sort(a, a+n, cmp);
}

void output(product a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i].order<<" "<<a[i].name<<" "<<a[i].group<<" "<<fixed<<setprecision(2)<<a[i].distance<<endl;
    }
}


int main(){
    struct product ds[100];
    int n; cin>>n;
    input(ds, n);
    compare(ds, n);
    output(ds,n);
}