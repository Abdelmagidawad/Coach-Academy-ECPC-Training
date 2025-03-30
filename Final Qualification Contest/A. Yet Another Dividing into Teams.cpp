

// Problem Name  : A. Yet Another Dividing into Teams

// Link of problem  :  https://codeforces.com/contest/1249/problem/A

// Solve Problem :

#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int* arr = new int[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr + n);
        int tem = 1;
        for (int i = 1; i < n; i++) {
            if (abs(arr[i] - arr[i -1]) <= 1) {
                tem = 2;
                break;
            }
                    }
        cout << tem << endl;
    }

    return 0;
}