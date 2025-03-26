
Problem Name  : A - Rolling Dice

Link of problem  :  https://atcoder.jp/contests/abc208/tasks/abc208_a?lang=en

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if ((a * 6) >= b&&b>=a) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
  return 0;
}
