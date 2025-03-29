
// Problem Name  : A. Print Recursion

// Link of problem  : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

// Solve Problem :

#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if(n == 0) return;
    cout << "I love Recursion" << endl;
    print(n-1);
}

int main(void) {
    int n; cin >> n;
    print(n);
    return 0;
}