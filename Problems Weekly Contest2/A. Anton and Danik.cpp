

Problem Name  : A. Anton and Danik

Link of problem  : https://codeforces.com/problemset/problem/734/A

Solve Problem :

#include <iostream>
using namespace std;

int main()
{
    int n,x=0,y=0;
    cin >> n;
    while (n--) {
        char s;
        cin >> s;
        if (s == 'A')
            x++;
        else
            y++;
    }
    if (x > y) {
        cout << "Anton" << endl;
    }
    else if(y>x) {
        cout << "Danik" << endl;
    }
    else {
        cout << "Friendship" << endl;
    }
    return 0;
}

