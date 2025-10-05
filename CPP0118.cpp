#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[100] = {0}, b[100] = {0}, c=0;
        int temp = n; 
        for(int i=2; i*i<=temp; i++){
            int count=0;
            if(temp%i==0){
                while(temp%i==0){
                    temp/=i;
                    count++;
                }
                a[c] = i;
                b[c] = count;
                c++;
            }
        }
        if(temp>1){
            a[c]=temp;
            b[c]=1;
            c++;
        }
        int sum=0;
        for(int i=0; i<c; i++){
            sum += b[i];
        }
        if (c == 3 && sum == 3) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
}