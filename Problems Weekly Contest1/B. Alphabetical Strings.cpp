
Problem Name  : B. Alphabetical Strings

Link of problem  :  https://codeforces.com/problemset/problem/1547/B

Solve Problem :

#include <iostream>

using namespace std;


    int main() {

        int t;
        cin>>t;
        while(t--){
            string s;
            cin>>s;
            int ind=0;
            int jnd=s.length()-1;
            char c=s[0];
            if(c<s[jnd]){
                c=s[jnd];
                jnd--;
            }else{
                ind++;
            }
            bool can=true;
            while(ind<=jnd){
                char c2=s[ind];
                if(c2<s[jnd]){
                c2=s[jnd];
                jnd--;
                }else{
                ind++;
                }
                if(c-c2!=1){
                    can=false;
                    break;
                }
                c=c2;
            }
            if(c!='a')can=false;
            if(can){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }

    return 0;
}
