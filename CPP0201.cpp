#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int min_diff = INT_MAX;
        for(int i=1; i<n; i++){
            int diff = a[i] - a[i-1];
            if(diff >= 0 && diff < min_diff){
                min_diff = diff;
            }
        }
        cout << min_diff << endl;
    }
    return 0;
}
