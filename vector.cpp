#include <bits/stdc++.h>
#include <vector>
using namespace std;

//vector<kieu du lieu> ten_bien;
//push_back();
//size(): kich thuoc vector;

int main(){
    vector<int> v;
    v.push_back(10);//day phan tu vao vector
    v.push_back(20);
    v.push_back(30);
    cout<<v.size()<<endl;
    cout<< "Phan tu dau tien trong vector: "<< v[0]<< endl;
}