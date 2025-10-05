#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        bool mark[1000001] = {false};
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] > 0 && a[i] <= 1000000){
                mark[a[i]] = true;
            }
        }
        int result = 1;
        while(mark[result] && result <= 1000000){
            result++;
        }
        
        cout << result << endl;
    }
}