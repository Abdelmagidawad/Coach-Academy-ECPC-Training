
// Problem Name  : P. Log2

// Link of problem  : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P

// Solve Problem :

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int log2(ll n) {
    if(n == 1) return 0;
    return 1 + log2(n/2);
}

int main(void) {
    ll n; cin >>n;
    cout << log2(n) << endl;
    return 0;
}

