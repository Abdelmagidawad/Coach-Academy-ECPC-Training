

Problem Name  : A. Mishka and Game

Link of problem  : https://codeforces.com/problemset/problem/703/A

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
 
    int n,c1=0,c2=0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int m, c;
        cin >> m >> c;
       
            if (m > c)
                c1 ++ ;
            if(c>m)
                c2++;
        
    }
    if (c1 > c2)
        cout << "Mishka" << endl;
     if (c2 > c1)
        cout << "Chris" << endl;
    if(c1==c2)
        cout << "Friendship is magic!^^" << endl;
        return 0;
}
 