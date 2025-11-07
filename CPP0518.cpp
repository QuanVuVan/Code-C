#include <bits/stdc++.h>
using namespace std;

struct NhanVien{
    int id;
    string name, gender, ns, address, day;
    long long ms;
};

void nhap(NhanVien &a){
    getline(cin, a.name);
    getline(cin, a.gender);
    getline(cin, a.ns);
    getline(cin, a.address);
    cin>>a.ms;
    cin.ignore();
    getline(cin, a.day);
    if(a.day[1] == '/'){
        a.day.insert(0, "0");
    }
    if(a.day[4] == '/'){
        a.day.insert(3, "0");
    }
}

bool cmp(NhanVien &a, NhanVien &b){
    if(a.ns[1] == '/'){
        a.ns.insert(0, "0");
    }
    if(a.ns[4] == '/'){
        a.ns.insert(3, "0");
    }
    string last_of_a, last_of_b;
    size_t last_space_a = a.ns.find_last_of(" ");
    if(last_space_a != string :: npos){
        last_of_a = a.ns.substr(last_space_a + 1);
    }
    size_t last_space_b = b.ns.find_last_of(" ");
    if(last_space_b != string :: npos){
        last_of_b = b.ns.substr(last_space_b +1);
    }
    if(last_of_a == last_of_b){
        
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}