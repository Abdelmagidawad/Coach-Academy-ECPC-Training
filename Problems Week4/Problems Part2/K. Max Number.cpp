
// Problem Name  : K. Max Number

// Link of problem  : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K

// Solve Problem :

#include<bits/stdc++.h>

using namespace std;
#define ll long long
int ar[int(1e3+1)];
int Max(int n) {
    if(n == 0) return ar[n];
    return max(ar[n],Max(n-1));
}

int main(void) {
    int n; cin >> n;
    for(int i =0;i<n;i++)
        cin >> ar[i];
    cout << Max(n-1) << endl;
    return 0;
}