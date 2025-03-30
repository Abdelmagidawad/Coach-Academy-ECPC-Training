

// Problem Name  : B. String LCM

// Link of problem  :  https://codeforces.com/problemset/problem/1473/B

// Solve Problem :

#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
#define ll long long 

string add(string s, int k) {
    
    string res = "";
    while (k--)  res += s;
    return res;
}

int main()
{
    int t;  cin >> t;
    while (t--) {
        string s, t;
        cin >> s >> t;

        int n = s.size(), m = t.size();
        int GCD = __gcd(n, m);
        (add(s, m / GCD) == add(t, n / GCD)) ? cout << add(s, m / GCD) << endl : cout << -1 << endl;
   
        
    }
   

    return 0;
}

 