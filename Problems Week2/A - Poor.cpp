
Problem Name  : A - Poor

Link of problem  :  https://atcoder.jp/contests/abc155/tasks/abc155_a?lang=en

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b&&a!=c&&b!=c) {
        cout << "Yes" << endl;
    }
    else if (a == c && a != b && c != b) {
        cout << "Yes" << endl;
    }
    else if (b == c && b != a && c != a) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
   
  return 0;
}
