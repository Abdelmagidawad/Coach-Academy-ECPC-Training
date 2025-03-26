
Problem Name  : A. Game With Sticks

Link of problem  :  https://codeforces.com/problemset/problem/451/A

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n == m) {
        if (n % 2 == 0) {
            cout << "Malvika" << endl;
        }
        else {
            cout << "Akshat" << endl;
        }
    }
    else {
        if (n < m) {
            if (n % 2 == 0)
                cout << "Malvika" << endl;
            else
                cout << "Akshat" << endl;

        }
        else {
            if (m % 2 == 0)
                cout << "Malvika" << endl;
            else
                cout << "Akshat" << endl;
        }
    }
    
  return 0;
}
 