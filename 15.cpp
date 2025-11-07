#include <bits/stdc++.h>
using namespace std;

struct nguoi{
    string name;
    int ngay, thang, nam;
};

bool so_sanh(nguoi &a, nguoi &b){
    if(a.nam != b.nam){
        return a.nam > b.nam;
    }
    if(a.thang != b.thang){
        return a.thang > b.thang;
    }
    return a.ngay > b.ngay;
}

int main(){
    int n; cin>>n;
    vector<nguoi> a(n);
    for(int i=0; i<n; i++){
        cin>> a[i].name;
        string ns;
        cin>> ns;
        a[i].ngay = stoi(ns.substr(0, 2));
        a[i].thang = stoi(ns.substr(3, 2));
        a[i].nam = stoi(ns.substr(6, 4));
    }
    sort(a.begin(), a.end(), so_sanh);
    cout<<a[0].name<<endl;
    cout<<a[n-1].name<<endl;
}