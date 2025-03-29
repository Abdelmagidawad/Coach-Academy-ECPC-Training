
// Problem Name  : Special Fibonacci 

// Link of problem  :  https://www.codechef.com/problems/FIBXOR01

// Solve Problem :

#include <iostream>

using namespace std;
int a, b, n;
int sfib(int n) {
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    if (n == 2)
        return a ^ b;
    return sfib(n %3);
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        cin >> a >> b >> n;
        cout << sfib(n) << endl;
    }
    
        return 0;
}
 
