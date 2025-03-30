

// Problem Name  : A. Tram

// Link of problem  :  https://codeforces.com/problemset/problem/116/A

// Solve Problem :

#include<iostream>
#include <algorithm>
#include<string>


using namespace std;

int main()
{
    int n;
    cin >> n;
    int x=0,max=0;
    while (n--) {
        int a, b;
        cin >> a >> b;
        x = x-a+b;
        if (x > max)
            max = x;
    }
    cout << max << endl;
       return 0;
}
