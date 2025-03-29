
// Problem Name  : B. Code obfuscation

// Link of problem  : https://codeforces.com/problemset/problem/765/B 

// Solve Problem :

#include<bits/stdc++.h>

using namespace std;

int main(void) {

    string s;
    cin >> s;
    bool freq[26];
    for(int i = 0;i<26;i++)
        freq[i] = false;

    for(char a : s){
        freq[a-'a'] = 1;
        if(!freq[a-1-'a'])
            return cout << "NO" << endl,0;
    }
    cout << "YES" << endl;
    return 0;
}