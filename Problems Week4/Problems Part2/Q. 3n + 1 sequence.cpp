
// Problem Name  : Q. 3n + 1 sequence

// Link of problem  : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Q

// Solve Problem :

#include <bits/stdc++.h>

using namespace std;

int sequence(int n) {
    if (n == 1)
        return 1;
    return 1 + (n % 2 ? sequence(3 * n + 1) : sequence(n / 2));
    // EQUIVALENT TO
    // return n == 1 ? 1 : 1 + (n%2 ? sequence(3*n+1) : sequence(n/2));
}

int main(void) {

    int n;
    cin >> n;
    cout << sequence(n) << endl;
    return 0;
}
