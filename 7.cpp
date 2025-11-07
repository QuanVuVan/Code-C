#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n, k; 
        cin >> n >> k; 
        vector<int> a; 
        for(int i = 0; i < n; i++){  
            int x; 
            cin >> x; 
            a.push_back(x); 
        }
        long long current = 0;
        for(int i = 0; i < k; i++){  
            current += a[i]; 
        }
        long long max_sum = current;
        int start = 0;
        for(int i = k; i < n; i++){
            current = current - a[i - k] + a[i];
            if(current > max_sum){
                max_sum = current;
                start = i - k + 1;
            }
        }
        for(int i = start; i < start + k; i++){  
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}