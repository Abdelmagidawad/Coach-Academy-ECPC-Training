

Problem Name  : C. Lucky Numbers

Link of problem  : https://codeforces.com/problemset/problem/630/C

Solve Problem :

#include <bits/stdc++.h>

using namespace std;

int main() {

   //Explanation
   // + / - *
   // <<
   // a << b => (a * 2^b) => 2^(n+1)
   // 1 << b = 2^b
   // 2^(n+1)
   // 1 << (n+1)
   // a >> b => (a / 2^b)

   // ANS = 2^(n+1) - 2
   int n;
   cin >> n;
   long long ans = pow(2,n+1);
   cout << ans - 2 << endl;


}