

Problem Name  : A. Lucky Sum of Digits

Link of problem  : https://codeforces.com/problemset/problem/109/A

Solve Problem :

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string ans = "";

    while (n > 0 && n % 7) { // while( n > 0 && n%7 != 0)
        n -= 4;
        ans += '4';
    }

    // string(number , character) repeats character number times
    // e.g. string(3,'7') = 777 , string(4,'9') = 9999

    ans += string(n / 7, '7');
    n < 0 ? cout << -1 << endl : cout << ans << endl;


      return 0;
}
