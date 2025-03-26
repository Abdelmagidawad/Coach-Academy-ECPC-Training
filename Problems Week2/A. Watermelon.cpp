
Problem Name  : A. Watermelon

Link of problem  :  https://codeforces.com/problemset/problem/4/A

Solve Problem :

#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>


using namespace std;

int main()
{
    int w;
    cin >> w;
    if (w % 2 == 0) {
        if (w != 2) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    else {
        cout << "NO" << endl;
    }
   return 0;
}