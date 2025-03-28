

Problem Name  : A. Dragons

Link of problem  : https://codeforces.com/problemset/problem/230/A

Solve Problem :

#include<bits/stdc++.h>

using namespace std;

int main() {

    int n , strength;
    cin >> strength >> n;

    pair<int,int> ar [n];

    for(int i = 0;i<n;i++)
        cin >> ar[i].first >> ar[i].second;

    sort(ar,ar+n);

    for(int i =0;i<n;i++)
        if( strength > ar[i].first )
            strength += ar[i].second;
        else
            return cout << "NO" << endl ,0;

    cout << "YES" << endl;

    return 0;
}