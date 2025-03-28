
Problem Name  : A. Odd Selection

Link of problem  : https://codeforces.com/problemset/problem/1363/A

Solve Problem : 

#include <iostream>
using namespace std;

int solve() {
    int n, x;
    int e = 0, o = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        e += a % 2 == 0;
        o += a % 2;
    }
    for (int i = 1; i <= x; i += 2)
        if (e >= x - i && o >= i)
            return cout << "Yes" << endl, 0;
    return cout << "No" << endl, 0;

}

int main()
{
    
        int t;
        cin >> t;
        while (t--)
            solve();

   
      return 0;
}
