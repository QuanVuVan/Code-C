#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int min_so_far = a[0];
        int max_diff = -1;
        for(int j=1; j<n; j++){
            if(a[j] > min_so_far){
                if(a[j] - min_so_far > max_diff){
                    max_diff = a[j] - min_so_far;
                }
            } else {
                min_so_far = a[j];
            }
        }
        if(max_diff <= 0) cout << "-1" << endl;
        else cout << max_diff << endl;
    }
    return 0;
}