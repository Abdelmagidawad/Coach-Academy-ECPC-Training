

Problem Name  : B. Sale

Link of problem  : https://codeforces.com/problemset/problem/34/B

Solve Problem :

#include <iostream>
#include<algorithm>
using namespace std;
 


int main()
{
    int m, n; cin >> m >> n;
    int* arr = new int[m];
    for (int i = 0; i < m; i++) cin >> arr[i];

    int temp = 0;
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= 0) {
            sum += arr[i];
        }
    }
    cout << abs(sum) << endl;

    return 0;
}