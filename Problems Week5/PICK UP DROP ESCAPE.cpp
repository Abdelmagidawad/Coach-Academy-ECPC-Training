


// Problem Name  : PICK UP DROP ESCAPE

// Link of problem  :  https://www.spoj.com/problems/CODEIT02/en/

// Solve Problem :

#include <iostream>

using namespace std;
#define ll long long 
int n, k;
int ar[30];
int Xor(int i, int k, int res) {

    if (k == 0)
        return res;
    if (i == n)
        return 0;
    int c1 = Xor(i + 1, k - 1, ar[i] ^ res);
    int c2 = Xor(i + 1, k, res);
    return max(c1, c2);
}
int main()
{ 
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 0; i < n; cin >> ar[i++]);
        cout << Xor(0, k, 0)<<endl;
    }

        return 0;
}
 