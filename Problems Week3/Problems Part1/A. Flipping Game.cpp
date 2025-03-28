

Problem Name  : A. Flipping Game

Link of problem  : https://codeforces.com/problemset/problem/327/A

Solve Problem :

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *ar=new int[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int ans = 0;
    for (int i = 0; i < n; i++) { // HOLDS FIRST OF SUBSTRING

        for (int j = i; j < n; j++) { // HOLDS LAST OF SUBSTRING
            int cur = 0;

            for (int k = 0; k < i; k++) // Finds how many 1'S before the substring
                cur += (ar[k] == 1);

            for (int k = j + 1; k < n; k++) // Finds how many 1's after the substring
                cur += (ar[k] == 1);

            for (int k = i; k <= j; k++) // Finds how many zeros inside the substring
                cur += (ar[k] == 0);

            //            NOTE : ABOVE 3 FOR LOOPS EQUIVALENT TO THE BELOW FOR LOOP
            //            for(int k = 0;k<n;k++)
            //                cur += (ar[k] == !(k >= i && k <= j));


            ans = max(ans, cur);
        }
    }

    cout << ans << endl;

   
      return 0;
}
