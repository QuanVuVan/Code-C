#include <bits/stdc++.h>
using namespace std;

struct sinhvien{
    int id;
    string msv, name, lop, email, company;
};

void nhap(sinhvien &a){
    getline(cin, a.msv);
    getline(cin, a.name);
    getline(cin, a.lop);
    getline(cin, a.email);
    getline(cin, a.company);
}

bool cmp(sinhvien &a, sinhvien &b){
    return a.name < b.name;
}

void sort_name(sinhvien a[], int n){
    sort(a, a+n, cmp);
}

void in(sinhvien &a){
    cout<<a.id<<" "<<a.msv<<" "<<a.name<<" "<<a.lop<<" "<<a.email<<" "<<a.company;
}

int main(){
    int t; cin>>t;
    cin.ignore();
    struct sinhvien a[50];
    for(int i=0; i<t; i++){
        a[i].id = i+1;
        nhap(a[i]);
    }
    sort_name(a, t);
    int n; cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++){
        string s;
        getline(cin, s);
        for(int j=0; j<t; j++){
            if(a[j].company == s){
                in(a[j]);
                cout<<endl;
            }
        }
    }
}