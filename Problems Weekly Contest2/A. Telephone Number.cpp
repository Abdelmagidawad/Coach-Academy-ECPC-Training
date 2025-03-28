

Problem Name  : A. Telephone Number

Link of problem  : https://codeforces.com/problemset/problem/1167/A

Solve Problem :

#include<bits/stdc++.h>
using namespace std;
int main(void) {


    int tc;
    cin >> tc;
    while(tc--){


        int n; cin >> n;

        string a;
        cin >> a;
        int i;
        for(i = 0; i < n ;i++)
            if(a[i] == '8')
                break;

        (n - i >= 11) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
