

// Problem Name  : Alaska

// Link of problem  :  https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2950

// Solve Problem :

#include<iostream>
#include <algorithm>
#include<string>
#include<cmath>


using namespace std;
const int N = 100000;
int arr[N];
int main()
{
    bool tast;
    int n;

    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        arr[n + 2];

        arr[0] = 0;
        arr[n + 1] = 1422;


        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        n = n + 2;

        sort(arr, arr + n);

        tast = true;

        for (int i = 1; i < n; i++)
        {
            if ((arr[i] - arr[i - 1]) > 200)
            {
                tast = false;
                break;
            }
        }

        if ((arr[n - 1] - arr[n - 2]) > 100)
        {
            tast = false;
        }

        if (tast)
        {
            cout << "POSSIBLE" << endl;
        }
        else
        {
            cout << "IMPOSSIBLE" << endl;
        }
    }


       return 0;
}
