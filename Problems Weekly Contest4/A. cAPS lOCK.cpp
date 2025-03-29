

// Problem Name  : A. cAPS lOCK

// Link of problem  :  https://codeforces.com/problemset/problem/131/A

// Solve Problem :

#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;
    int n = str.size();
 
    for (int i = 1; i < n; i++)
    {
        if (islower(str[i]))
        {
            cout << str << endl;
            return 0;
        }
    }
 
    for (int i = 0; i < n; i++)
    {
        str[i] = str[i] ^ 32;
    }
    cout << str << endl;
    return 0;
}