
// Problem Name  : A. Bachgold Problem

// Link of problem  : https://codeforces.com/problemset/problem/749/A

// Solve Problem :

#include <iostream>

using namespace std;


    int main() {

        int n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<endl;
            for(int i=1;i<=n;i+=2){
                cout<<2<<" ";
            }
        }else{
            cout<<n/2<<endl;
            for(int i=1;i<=n-3;i+=2){
                cout<<2<<" ";
            }
            cout<<3;
        }


    return 0;
}

