


// Problem Name  : A. Diverse Substring

// Link of problem  :  https://codeforces.com/problemset/problem/1073/A

// Solve Problem :

#include<iostream> 

 using namespace std; 
 int main() { 	

    int l, i, j, k, m, ans = 0; 	char a[1003];
    cin >> l >> a;
    for (i = 1; i < l; i++) {
        if (a[i] != a[i - 1])
        {
            ans++;
            cout << "YES" << endl << a[i - 1] << a[i] << endl; 			break;
        }
    }
    if (ans != 1)
    {
        cout << "NO" << endl;
    }
    }