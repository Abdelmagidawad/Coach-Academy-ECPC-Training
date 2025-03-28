


Problem Name  : A. Lucky Division

Link of problem  : https://codeforces.com/problemset/problem/122/A

Solve Problem :

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        bool lucky = 1;
        int k = i;
        while (k) {
            if (k % 10 != 4 && k % 10 != 7) {
                lucky = 0;
                break;
            }
            k /= 10;
        }
        if (n % i == 0 && lucky) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

      return 0;
}
 
