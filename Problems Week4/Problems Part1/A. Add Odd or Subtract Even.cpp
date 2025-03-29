
// Problem Name  : A. Add Odd or Subtract Even

// Link of problem  : https://codeforces.com/problemset/problem/1311/A

// Solve Problem :

#include <iostream>

using namespace std;


    int main() {
        
        int t,a,b;
        cin>>t;
        while(t--){
            cin>>a>>b;
           if(a==b){
            cout<<0;
           }else if(a<b){
            if((b-a)%2==1){
                cout<<1;
            }else{
                cout<<2;
            }
           }else{
                if((b-a)%2==0){
                    cout<<1;
                }else{
                 cout<<2;
                }
           }


            cout<<endl;
        }


    return 0;
}

