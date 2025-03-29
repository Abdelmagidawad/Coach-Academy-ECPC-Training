

// Problem Name  : M. Suffix Sum

// Link of problem  :  https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/M

// Solve Problem :

#include<bits/stdc++.h>

using namespace std;
#define ll long long
int ar[int(1e5+1)];
ll Sum(int n,int m) {
    if(n == m)
        return ar[n];
    return ar[n] + Sum(n-1,m);
}

int main(void) {
    int n,m; cin >> n >> m;
    for(int i =0;i<n;i++)
        cin >> ar[i];
    cout << Sum(n-1,n-m) << endl;
    return 0;
}