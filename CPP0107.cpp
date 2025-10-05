#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char dapan_101[] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
        char dapan_102[]={'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
        int n;
        cin>>n;
        char a[15];
        for(int i=0; i<15; i++){
            cin>>a[i];
        }
        double final=0;
        if(n==101){
            for(int i=0; i<15; i++){
                if(a[i]==dapan_101[i]){
                    final++;
                }
            }
        }
        else{
            for(int i=0; i<15; i++){
                if(a[i]==dapan_102[i]){
                    final++;
                }
            }
        }
        double correct= final*2.0/3.0;
        correct = round(correct*100)/100;
        if(correct>9.99){
            correct=10.0;
        }        
        cout<<fixed<<setprecision(2)<<correct<<endl;
    }
}