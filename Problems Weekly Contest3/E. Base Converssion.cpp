


// Problem Name  : E. Base Converssion

// Link of problem  :  https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E

//Solve Problem :

#include <iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
    int t;  cin >> t;
    stack<int>s;
    while (t--) {
        int n,x; cin >> n;
        x = n/2;
        while (x != 0) {
            if (n % 2 != 0)
                s.push(1);
            else s.push(0);
            x = n / 2;
            n /= 2;
        }
        for (int i = 0; !s.empty(); i++) {
            cout << s.top();
            s.pop();
        }
        cout << endl;
    }
    return 0;
}
 