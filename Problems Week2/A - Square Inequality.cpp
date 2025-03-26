
Problem Name  : A - Square Inequality

Link of problem  :  https://atcoder.jp/contests/abc199/tasks/abc199_a?lang=en

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a * a) + (b * b) < (c * c)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

  return 0;
}
