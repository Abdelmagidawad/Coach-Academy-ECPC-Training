

Problem Name  : B. Permutation Sort

Link of problem  : https://codeforces.com/problemset/problem/1525/B

Solve Problem :

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        // CASE 0 :
        bool flag = 1;
        for(int i = 0;i<n;i++)
            if(i+1 != ar[i])
                flag = 0;
        if(flag)
            cout << 0 << endl;
        //
        // CASE 1
        else if(ar[0] == 1 || ar[n-1] == n)
                cout << 1 << endl;
        //
        // CASE 3
        else if(ar[0] == n && ar[n-1] == 1)
            cout << 3 << endl;
        //
        // CASE 2
        else cout << 2 << endl;
        //
    }


    return 0;
}