
Problem Name  : A - Maxi-Buying

Link of problem  :  https://atcoder.jp/contests/abc206/tasks/abc206_a?lang=en

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cin >> n;
    x = n * 1.08;
    if (x < 206) {
        cout << "Yay!" << endl;
    }
    else if (x == 206) {
        cout << "so-so" << endl;
    }
    else {
        cout << ":(" << endl;
    }
  return 0;
}
 