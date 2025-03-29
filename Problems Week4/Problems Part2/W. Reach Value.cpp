
// Problem Name  : W. Reach Value

// Link of problem  : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W

// Solve Problem :

#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll N;
bool reach(ll n) {

    if(n == N)
        return true;
    if(n > N)
        return false;
    return reach(n * 10) || reach(n * 20);

    // EQUIVALENT TO
    // return n == N || n <= N && (reach(n * 10) || reach(n * 20));

}

int main(void) {
    int tc;
    cin >> tc;
    while (tc--) {
        cin >> N;
        cout << (reach(1ll) ? "YES" : "NO") << endl;
    }
    return 0;
}
