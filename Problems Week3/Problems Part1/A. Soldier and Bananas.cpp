

Problem Name  : A. Soldier and Bananas

Link of problem  : https://codeforces.com/problemset/problem/546/A

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
    int k,w,sum=0;
    long long n;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++) {

        sum += (i * k);
    }
    if (sum <= n)
        cout << 0 << endl;
    else
        cout << (sum - n);

      return 0;
}
