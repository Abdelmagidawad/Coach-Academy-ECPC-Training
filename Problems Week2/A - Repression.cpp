
Problem Name  : A - Repression

Link of problem  :  https://atcoder.jp/contests/abc207/tasks/abc207_a?lang=en

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
    int a, b, c,x,y,z;
    cin >> a >> b >> c;
    x = a + b;
    y = b + c;
    z = c + a;
    if (x > y && x > z)
        cout << x << endl;
    else if (y > x && y > z)
        cout << y << endl;
    else
        cout << z << endl;
    
  return 0;
}
