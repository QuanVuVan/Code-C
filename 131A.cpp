#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    getline(cin, s);
    bool allUpper = true;
    for(int i = 0; i < s.size(); i++){
        if(islower(s[i])){
            allUpper = false;
            break;
        }
    }
    if(allUpper){
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
        cout << s;
    }
    else{
        bool firstLowerRestUpper = islower(s[0]);
        if(firstLowerRestUpper){
            for(int i = 1; i < s.size(); i++){
                if(islower(s[i])){
                    firstLowerRestUpper = false;
                    break;
                }
            }
        }
        if(firstLowerRestUpper){
            s[0] = toupper(s[0]);
            for(int i = 1; i < s.size(); i++){
                s[i] = tolower(s[i]);
            }
            cout << s;
        }
        else{
            cout << s;
        }
    }
    
    return 0;
}