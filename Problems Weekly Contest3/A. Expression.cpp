


// Problem Name  : A. Expression

// Link of problem  :  https://codeforces.com/problemset/problem/479/A

//Solve Problem :

#include <iostream>
using namespace std;

int main()
{

int a, b, c;
    cin >> a >> b >> c;
    int  x,y, z, v;
    x = a + b + c;
    y = a * (b + c);
    z = a * b * c;
    v = (a + b) * c;
    x = max(x, v);
    x = max(x, y);
    x = max(x, z);
    cout << x << endl;
   
    return 0;
}