

Problem Name  : A. Polycarp and Coins

Link of problem  : https://codeforces.com/problemset/problem/1551/A

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long int n, c1, c2;
        cin >> n;
        c2 = (n + 1) / 3;
        c1 = n - (2 * c2);
       
        if ((c1*1)+(c2*2) == n)
            cout <<c1 << " " << c2 << endl;
        else {
            cout << c2 << " " << c1 << endl;
        }
    }
    return 0;
}
