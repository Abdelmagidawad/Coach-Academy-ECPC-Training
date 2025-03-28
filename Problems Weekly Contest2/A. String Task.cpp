

Problem Name  : A. String Task

Link of problem  : https://codeforces.com/contest/118/problem/A

Solve Problem :

#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>


using namespace std;

int main()
{
    string s, op = "";
    cin >> s;
    for (char a : s) {
        a = tolower(a);
        if (!(a == 'a' | a == 'o' | a == 'i' | a == 'e' | a == 'u' | a == 'y')) {
            op += ".";
            op += a;
        }
    }
    cout << op << endl;

       return 0;
}
 