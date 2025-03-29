
// Problem Name  : A. String Task

// Link of problem  : https://codeforces.com/problemset/problem/118/A

// Solve Problem :

#include<iostream>
#include<string>

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
 