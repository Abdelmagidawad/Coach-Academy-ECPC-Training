
Problem Name  : A - Counting

Link of problem  :  https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a < b) {
        cout << b - (a - 1) << endl;
    }
    else {
        cout << 0 << endl;
    }


  return 0;
}
 