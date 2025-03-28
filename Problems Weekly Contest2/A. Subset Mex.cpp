

Problem Name  : A. Subset Mex

Link of problem  : https://codeforces.com/problemset/problem/1406/A

Solve Problem :

#include<bits/stdc++.h>

using namespace std;

int main() {

    int tc;
    cin >> tc;
    while (tc--) {

        int frequency[101];
        for(int i = 0;i<101;i++)
            frequency[i] = 0;

        int n;
        cin >> n;

        for(int i = 0;i<n;i++){
            int a;
            cin >> a;
            frequency[a] ++ ;
        }

        int mexA;
        int mexB;

        for(int i = 0;i<101;i++)
            if(frequency[i] == 0){
                mexA = i;
                break;
            }

        for(int i = 0;i<101;i++)
            if(frequency[i] <= 1){
                mexB = i;
                break;
            }
        cout << mexA + mexB << endl;
    }

    return 0;
}