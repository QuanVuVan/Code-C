#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string id, name, lop;
    float diem1, diem2, diem3;
};

void nhap(SinhVien &a){
    cin.ignore();
    getline(cin, a.id);
    getline(cin, a.name);
    getline(cin, a.lop);
    cin>>a.diem1>>a.diem2>>a.diem3;
}

bool cmp(SinhVien &a, SinhVien &b){
    // int num1 = 0, num2 = 0;
    // for(int i=0; i<a.name.size(); i++){
    //     if(a.name[i] >= '0' && a.name[i] <= '9'){
    //         num1 = num1*10 + a.name[i] -'0';
    //     }
    // }
    // for(int i=0; i<b.name.size(); i++){
    //     if(b.name[i] >= '0' && b.name[i] <= '9'){
    //         num2 = num2*10 + b.name[i] -'0';
    //     }
    // }
    // return num1 > num2;
    return a.id < b.id;
}

void sap_xep(SinhVien a[], int n){
    sort(a, a+n, cmp);
}

void in_ds(SinhVien a[], int n){
    for(int i=0; i<n; i++){
        cout<<i+1<<" "<<a[i].id<<" "<<a[i].name<<" "<<a[i].lop<<" "<<fixed<<setprecision(1)<<a[i].diem1<<fixed<<setprecision(1)<<" "<<a[i].diem2<<fixed<<setprecision(1)<<" "<<a[i].diem3;
        cout<<endl;
    }
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}