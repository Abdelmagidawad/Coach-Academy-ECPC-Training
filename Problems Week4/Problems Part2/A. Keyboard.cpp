
// Problem Name  : A. Keyboard

// Link of problem  : https://codeforces.com/problemset/problem/474/A

// Solve Problem :

#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
   
    string st = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    string s, sd;
    cin >> c >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        if (c == 'R')
            sd += st[st.find(s[i]) - 1];
        else
            sd += st[st.find(s[i]) + 1];
    }cout << sd;
    return 0;
}
