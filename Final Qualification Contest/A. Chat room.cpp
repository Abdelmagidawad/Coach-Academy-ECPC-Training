

// Problem Name  : A. Chat room

// Link of problem  :  https://codeforces.com/problemset/problem/58/A

// Solve Problem :

#include<bits/stdc++.h>

using namespace std;

int main(void) {

    string s;
    cin >> s;

    string hello = "hello";
    int l = 0;

    for(int i = 0;i<s.size() && l < 5;i++)
        l += (s[i] == hello[l]);

    l == 5 ? cout << "YES" << endl : cout << "NO" << endl ;


    return 0;
}