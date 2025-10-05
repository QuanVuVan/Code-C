#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int count[256] = {0};
        for(int i = 0; i < s.size(); i++){
            count[(int)s[i]]++;
        }
        for(int i = 0; i < s.size(); i++){
            if(count[(int)s[i]] == 1){
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}