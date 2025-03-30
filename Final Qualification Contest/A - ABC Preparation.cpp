

// Problem Name  : A - ABC Preparation

// Link of problem  :  https://atcoder.jp/contests/abc185/tasks/abc185_a?lang=en

// Solve Problem :

#include<iostream>
#include <algorithm>
#include<string>


using namespace std;

int main()
{
    int A[4];
    for (int i = 0; i < 4; i++) {
        cin >> A[i];
   }
    int min =A[0];
    for (int j = 0; j < 4; j++) {
        if (A[j] < min)
            min = A[j];
    }
    cout << min << endl;
    return 0;
}

