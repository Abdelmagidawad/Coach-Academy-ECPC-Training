
// Problem Name  : N. Sum of a Matrix

// Link of problem  : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N

// Solve Problem :

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define inp(ar) for(int &i : ar) cin >> i

int A[101][101],B[101][101];
int R,C;
void Matrix(int r,int c) {
    if(r == R)
        return ;
    if(c == C){
        cout << endl;
        Matrix(r+1,0);
    }
    else {
        cout << A[r][c] + B[r][c] << ' ';
        Matrix(r,c+1);
    }
}

int main(void) {
    cin >> R >> C;
    for(int i = 0;i<R;i++)
        for(int j = 0;j<C;j++)
            cin >> A[i][j];

    for(int i = 0;i<R;i++)
        for(int j = 0;j<C;j++)
            cin >> B[i][j];

    Matrix(0,0);
    return 0;
}