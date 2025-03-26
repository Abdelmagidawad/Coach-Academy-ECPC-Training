
Problem Name  : A. Meeting of Old Friends

Link of problem  :  https://codeforces.com/problemset/problem/714/A

Solve Problem :

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long l1, r1, l2, r2, k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    long long r, l,per=2;

    l = max(l1, l2);
    r = min(r1, r2);
    if (l > r) {
        per = 0;
    }
    else if (k >= l && k <= r) {
        per = r - l;
    }
        else {
        per = r - l + 1;
        }
    cout << per << endl;
      return 0;
}
