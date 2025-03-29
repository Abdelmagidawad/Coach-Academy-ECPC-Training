
// Problem Name  : A. k-String

// Link of problem  : https://codeforces.com/problemset/problem/219/A 

// Solve Problem :

#include<bits/stdc++.h>

using namespace std;

int main(void) {

    string s;
    int k;
    cin >> k >> s;
    int freq[26];
    for (int i = 0; i < 26; i++)
        freq[i] = 0;

    for (char a : s)
        freq[a - 'a']++;

    for (int i = 0; i < 26; i++)
        if (freq[i] % k)
            return cout << -1 << endl, 0;

    string res = "";
    for (int i = 0; i < 26; i++)
        res += string(freq[i]/k,(char)(i+'a'));

    for(int i = 0;i<k;i++)
        cout << res ;
    cout << endl;
    return 0;
}