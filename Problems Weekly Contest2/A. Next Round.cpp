

Problem Name  : A. Next Round

Link of problem  : https://codeforces.com/contest/158/problem/A

Solve Problem :

#include<iostream>

using namespace std;


int main()
{
    
    int n, k;
    cin >> n >> k;
    int *arr=new int[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int y = arr[k - 1];
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= y && arr[i] > 0)
            counter++;
    }
    cout << counter << endl;
   
    return 0;
}