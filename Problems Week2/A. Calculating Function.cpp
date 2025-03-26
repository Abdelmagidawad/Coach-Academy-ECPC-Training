
Problem Name  : A. Calculating Function

Link of problem  :  https://codeforces.com/problemset/problem/486/A

Solve Problem :

#include<iostream>

#define ll long long

using namespace std;

int main()
{
     ll n; cin >> n;
     ll sum = (n + 1) / 2;
     if (n % 2 != 0) sum *= -1;
     cout << sum << endl;
    return 0;
}