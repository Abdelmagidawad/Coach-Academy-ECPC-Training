

// Problem Name  : J. Factorial

// Link of problem  :  https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J

// Solve Problem :

#include<iostream>
#include <algorithm>
#include<cmath>
using namespace std;

long long fact(int n) {

    if (n == 1){
        return 1;
    }
    else {
        return n * fact(n - 1);
    }
}
int main()
{
    long long n;
    cin >> n;
    cout << fact(n) << endl;
    
  return 0;
}