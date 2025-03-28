

Problem Name  : A. Strange Partition

Link of problem  : https://codeforces.com/problemset/problem/1471/A

Solve Problem :

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {


    int tc; cin >> tc;

    while(tc--){

        int n , x;
        cin >> n >> x;

        ll mxs = 0;
        ll mns = 0;

        for(int i = 0;i<n;i++){
            int a;
            cin >> a;
            mns += a;
            mxs += (a+x-1)/x;
        }

        cout << (mns+x-1)/x << ' ' << mxs << endl;
    }
    return 0;
}