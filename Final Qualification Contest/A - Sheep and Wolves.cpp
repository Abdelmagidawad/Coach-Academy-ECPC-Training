

// Problem Name  : A - Sheep and Wolves

// Link of problem  :  https://atcoder.jp/contests/abc164/tasks/abc164_a?lang=en

// Solve Problem :

#include<iostream>
#include <algorithm>


using namespace std;

int main()
{
    int s, w;
    cin >> s >> w;
    if (w >= s) {
        cout << "unsafe" << endl;

    }
    else {
        cout << "safe" << endl;
    }
    return 0;
}

