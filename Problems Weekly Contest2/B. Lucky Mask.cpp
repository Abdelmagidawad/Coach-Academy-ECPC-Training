

Problem Name  : B. Lucky Mask

Link of problem  : https://codeforces.com/problemset/problem/146/B

Solve Problem :

#include<bits/stdc++.h>

using namespace std;

int main(void) {



    int a;
    cin >> a;
    string b;
    cin >> b;
    for(int i = a+1  ;   ;  i++){

        string cur = to_string(i);
        string mask = "";

        for(int j = 0;j<cur.size();j++) {
            if (cur[j] == '4' || cur[j] == '7')
                mask += cur[j];
        }

        if(mask == b) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
