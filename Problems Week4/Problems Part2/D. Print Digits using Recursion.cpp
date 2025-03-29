
// Problem Name  : D. Print Digits using Recursion

// Link of problem  : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D

// Solve Problem :

#include<bits/stdc++.h>

using namespace std;

void print(int n) {
    if (n == 0)
        return;
    print(n / 10);
    cout << n % 10 << ' ';

}

int main(void) {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        if (n == 0)
            cout << 0;
        else
            print(n);
        cout << endl;
    }
    return 0;
}