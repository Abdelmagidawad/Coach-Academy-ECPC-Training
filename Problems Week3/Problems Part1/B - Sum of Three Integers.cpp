

Problem Name  : B - Sum of Three Integers

Link of problem  : https://atcoder.jp/contests/abc051/tasks/abc051_b?lang=en

Solve Problem :

#include<iostream>

using namespace std;

int main()
{

    int k, s;
    cin >> k >> s;
    int c = 0;
    for (int i = 0; i <= k; i++) {
        for (int j = 0; j <= k; j++) {
            if (s - i - j >= 0 && s - i - j <= k)
                c++;
        }
    }
    cout << c << endl;
    return 0;
}
