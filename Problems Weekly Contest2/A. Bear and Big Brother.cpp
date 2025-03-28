

Problem Name  : A. Bear and Big Brother

Link of problem  : https://codeforces.com/problemset/problem/791/A

Solve Problem :

#include <iostream>
using namespace std;

int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    while (a <= b) {
        a *= 3;
        b *= 2;
        count++;
    }
    cout << count << endl;
      return 0;
}
