#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string name, lop, ns;
    int msv;
    float gpa;
};

void nhap(SinhVien a[], int n){
    cin.ignore();
    for(int i=0; i<n; i++){
        a[i].msv = i+1;
        getline(cin, a[i].name);
        getline(cin, a[i].lop);
        getline(cin, a[i].ns);
        cin>>a[i].gpa;
        cin.ignore();
        for(int j=0; j<a[i].name.size(); j++){
            a[i].name[j] = tolower(a[i].name[j]);
        }
        if(a[i].ns[1] == '/'){
            a[i].ns.insert(0, "0");
        }
        if(a[i].ns[4] == '/'){
            a[i].ns.insert(3, "0");
        }
    }
}

bool cmp(SinhVien &a, SinhVien &b){
    return a.gpa > b.gpa;
}

void sapxep(SinhVien a[], int n){
    sort(a, a+n, cmp);
}

void in(SinhVien a[], int n){
    for(int i=0; i<n; i++){
        if( a[i].msv < 10){
            cout<<"B20DCCN00"<<a[i].msv<<" ";
            stringstream ss(a[i].name);
            string tmp;
            while(ss >> tmp){
                tmp[0] = toupper(tmp[0]);
                cout<<tmp<<" ";
            }
            cout<<a[i].lop<<" "<<a[i].ns<<" "<<fixed<<setprecision(2)<<a[i].gpa;
        }
        else{
            cout<<"B20DCCN0"<<a[i].msv<<" ";
            stringstream ss(a[i].name);
            string tmp;
            while(ss >> tmp){
                tmp[0] = toupper(tmp[0]);
                cout<<tmp<<" ";
            }
            cout<<a[i].lop<<" "<<a[i].ns<<" "<<fixed<<setprecision(2)<<a[i].gpa;
        }
        cout<<endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}