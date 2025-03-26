
Problem Name  : A - Three-Point Shot

Link of problem  :  https://atcoder.jp/contests/abc188/tasks/abc188_a?lang=en

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x>y) {
        if ((y + 3) > x) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    else if (y > x) {
        if ((x + 3) > y) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    else {
        cout << "No" << endl;
    }
    
  return 0;
}
