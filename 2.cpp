#include <bits/stdc++.h>
using namespace std;

struct SoPhuc{
    float ao1 ,thuc1, ao2, thuc2;
};

void hien_thi(SoPhuc &a, SoPhuc &b){
    cin>>a.thuc1>>a.ao1>>b.thuc2>>b.ao2;
}

void binh_phuong_tong(SoPhuc &a, SoPhuc &b){
    cout<<(a.thuc1+b.thuc2)*(a.thuc1+b.thuc2)-(a.ao1+b.ao2)*(a.ao1+b.ao2)<<" + "<<2*(a.thuc1+b.thuc2)*(a.ao1+b.ao2)<<"i"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        SoPhuc a, b;
        hien_thi(a, b);
        binh_phuong_tong(a, b);
    }
}