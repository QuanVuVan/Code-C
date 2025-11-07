    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t; cin>>t;
        cin.ignore();
        while(t--){
            string s; getline(cin, s);
            s += ".";
            int num =0, check=1, count=0;
            for(char c : s){
                if(c != '.'){
                    if(c >= '0' && c <= '9'){
                    num = num*10 + c - '0';
                }
                    else{
                        check=0;
                        break;
                }
                }
                else{
                    count++;
                    if(num > 255 || num < 0 || count > 4){
                        check = 0;
                        break;
                    }
                    num = 0;
                }
            
            }
            if(count != 4){
                check=0;
            }
            if(check) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }