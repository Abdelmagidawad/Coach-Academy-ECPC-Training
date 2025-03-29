
// Problem Name  : A. The New Year: Meeting Friends

// Link of problem  : https://codeforces.com/problemset/problem/723/A

// Solve Problem :

#include <iostream>
#include <cmath>
using namespace std;

int distance(int x1, int x2, int x3) {
    int max, min;
    if (x1 > x2 && x1 > x3)
        max = x1;
    else if (x2 > x1 && x2 > x3)
        max = x2;
    else
        max = x3;

    if (x1 < x2 && x1 < x3)
        min = x1;
    else if (x2 < x1 && x2 < x3)
        min = x2;
    else
        min = x3;
    return max - min;
}

int main()
{
    int a,b,c;
    cin >> a >> b>>c;
        
    cout <<distance(a,b,c) << endl;

    return 0;
}
 