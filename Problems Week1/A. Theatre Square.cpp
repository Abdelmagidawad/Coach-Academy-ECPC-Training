
Problem Name  : A. Theatre Square

Link of problem  : https://codeforces.com/problemset/problem/1/A

Solve Problem :

#include <iostream>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    long long x, y;
    x = (n + a - 1) / a;
    y = (m + a - 1) / a;
    cout << x * y << endl;


         return 0;
}
 