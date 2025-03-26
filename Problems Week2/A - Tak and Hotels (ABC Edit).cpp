
Problem Name  : A - Tak and Hotels (ABC Edit)

Link of problem  :  https://atcoder.jp/contests/abc044/tasks/abc044_a?lang=en

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
    int n, k, x, y,t,d;
    cin >> n >> k >> x >> y;
    if (n > k) {
        t = x * k;
        d = (n - k) * y;
        cout << t + d << endl;
    }
    else {
        cout << n * x << endl;
    }
    
  return 0;
}

