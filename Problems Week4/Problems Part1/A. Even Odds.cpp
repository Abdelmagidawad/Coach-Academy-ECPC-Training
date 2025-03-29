
// Problem Name  : A. Even Odds

// Link of problem  : https://codeforces.com/problemset/problem/318/A

// Solve Problem :

#include<iostream> 
#include<algorithm>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long m = (n+1) / 2;
    if (k > m) 
        cout << (k - m) * 2 << endl;
    else
        cout << (k * 2) - 1 << endl;
    
      return 0;
}