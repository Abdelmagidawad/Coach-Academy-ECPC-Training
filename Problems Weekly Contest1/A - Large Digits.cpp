
Problem Name  : A - Large Digits

Link of problem  :  https://atcoder.jp/contests/abc187/tasks/abc187_a?lang=en

Solve Problem :

#include<iostream> 
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;

int main()
{

    int a,b;
    cin >> a >> b;
    int s1 = 0, s2 = 0;
    while (a > 0) {
        s1 += a % 10;
        a /= 10;
}
    while (b > 0) {
        s2 += b % 10;
        b /= 10;
    }
    cout << max(s1, s2) << endl;


    return 0;
}
   
