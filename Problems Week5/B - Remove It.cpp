

// Problem Name  : B - Remove It

// Link of problem  :  https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en

// Solve Problem :

#include<iostream> 
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
  
    int n, x;
    cin >> n >> x;
    int* arr = new int[n];

    for (int i =0; i < n; i++) {
        cin>> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] != x)
            cout << arr[i] << " ";
    }

    return 0;
}
   
