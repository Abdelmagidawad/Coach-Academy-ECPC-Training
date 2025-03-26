
Problem Name  : A - Rock-paper-scissors

Link of problem  :  https://atcoder.jp/contests/abc204/tasks/abc204_a?lang=en

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x != y) {
        if ((x == 0 && y == 1) || (x == 1 && y == 0)) {
            cout << 2 << endl;
        }
        else if ((x == 1 && y == 2) || (x == 2 && y == 1)) {
            cout << 0 << endl;
        }
        else if ((x == 2 && y == 0) || (x == 0 && y == 2)) {
            cout << 1 << endl;
        }
    }
    else {
        cout << x << endl;
    }

  return 0;
}
