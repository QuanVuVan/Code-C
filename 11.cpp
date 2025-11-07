#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }
        int top=0, bot = n-1;
        int left=0, right = m-1;
        vector<int> ve;
        while(top <= bot && left <= right){
            for(int i=left; i<= right; i++){
                ve.push_back(a[top][i]);
            }
            top++;
            for(int i=top ; i<= bot; i++){
                ve.push_back(a[i][right]);
            }
            right--;
            if(top <= bot){
                for(int i= right; i>= left; i--){
                    ve.push_back(a[bot][i]);
                }
                bot--;
            }
            if(left <= right){
                for(int i=bot; i>= top; i--){
                    ve.push_back(a[i][left]);
                }
                left++;
            }
        }
        for(int i=0; i<ve.size(); i++){
            cout<<ve[i];
            if(i < ve.size()-1) cout<<" ";
        }
        cout<<endl;
    }
}