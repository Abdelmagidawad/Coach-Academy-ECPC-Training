
Problem Name  : A - T or T

Link of problem  :  https://atcoder.jp/contests/abc133/tasks/abc133_a?lang=en

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    if ((n * a) < b) {
        cout << n * a << endl;
    }
    else {
        cout << b << endl;
    }
   
  return 0;
}