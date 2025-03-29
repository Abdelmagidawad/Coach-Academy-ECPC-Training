

// Problem Name  : A. Magnets

// Link of problem  :  https://codeforces.com/problemset/problem/344/A

// Solve Problem :

#include <iostream>
#include<string>
using namespace std;

int a[100000+5];

int main()
{
    int n;
    cin >> n;
    a[n];
    int c = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int j = 1; j <= n; j++) {
        if (a[j]!=a[j -1])
            c++;
    }
    cout << c << endl;
   
        return 0;
}