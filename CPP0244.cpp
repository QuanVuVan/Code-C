#include <bits/stdc++.h>
using namespace std;

int cnt[1000];

int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n], count=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cnt[a[i]]++;
    }
    for(int i=0; i<n; i++){
        if(cnt[a[i]]>=1){
            b[count++]=a[i];
            cnt[a[i]]=0;
        }
    }
    for(int i=0; i<count; i++){
        for(int j=0; j<count-1; j++){
            if(b[j]>b[j+1]){
                int temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    for(int i=0; i<count; i++){
        cout<<b[i]<<" ";
    }
}