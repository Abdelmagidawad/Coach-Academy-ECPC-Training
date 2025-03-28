

Problem Name  : A. 2048 Game

Link of problem  : https://codeforces.com/problemset/problem/1221/A

Solve Problem :

#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int sum=0;
        while (n--) {
            int a;
            cin >> a;
            if (a <= 2048) {
                sum += a;
            }
        }
        //ternary operator
        sum >= 2048 ? cout << "YES" << endl : cout << "NO" << endl;
    }

      return 0;
}
