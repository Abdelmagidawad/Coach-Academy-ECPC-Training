
// Problem Name  : A. Eevee

// Link of problem  : https://codeforces.com/problemset/problem/452/A

// Solve Problem :

#include<bits/stdc++.h>

using namespace std;

int main(void) {

    string ar[] = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};

    int n;
    string s;
    cin >> n >> s;

    for(int i = 0;i<8;i++) {
        if(ar[i].size() != n)
            continue;
        int j;
        for(j = 0;j<n;j++)
            if(s[j] != '.' && s[j] != ar[i][j])
                break;

        if(j == n)
            cout << ar[i] << endl;
    }

    return 0;
}