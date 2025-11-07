#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string name, lop, ns;
    float gpa;
};

void nhap(SinhVien a[], int n){
    cin.ignore();
    for(int i=0; i<n; i++){
        getline(cin, a[i].name);
        getline(cin, a[i].lop);
        getline(cin, a[i].ns);
        cin>>a[i].gpa;
        cin.ignore();
        if(a[i].ns[1] == '/'){
            a[i].ns.insert(0, "0");
        }
        if(a[i].ns[4] == '/'){
            a[i].ns.insert(3, "0");
        }
    }
}

void in(SinhVien a[], int n){
    for(int i=0; i<n; i++){
        if( i < 9){
            cout<<"B20DCCN00"<<i+1<<" "<<a[i].name<<" "<<a[i].lop<<" "<<a[i].ns<<" "<<fixed<<setprecision(2)<<a[i].gpa;
        }
        else{
            cout<<"B20DCCN0"<<i+1<<" "<<a[i].name<<" "<<a[i].lop<<" "<<a[i].ns<<" "<<fixed<<setprecision(2)<<a[i].gpa;
        }
        cout<<endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
