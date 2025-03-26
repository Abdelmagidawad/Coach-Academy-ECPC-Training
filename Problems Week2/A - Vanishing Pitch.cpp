
Problem Name  : A - Vanishing Pitch

Link of problem  :  https://atcoder.jp/contests/abc191/tasks/abc191_a?lang=en

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    if (v * t > d || v * s < d) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    
  return 0;
}
 