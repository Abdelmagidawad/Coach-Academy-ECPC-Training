
Problem Name  : A - Very Very Primitive Game

Link of problem  :  https://atcoder.jp/contests/abc190/tasks/abc190_a?lang=en

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
    
int a, b, c;
cin >> a >> b >> c;
if (a >b) {
    cout << "Takahashi" << endl;
}
else if (a < b) {
    cout << "Aoki" << endl;
}
else {
    if (a == b && c == 0) {
        cout << "Aoki" << endl;
    }
    else {
        cout << "Takahashi" << endl;
    }
}
    

  return 0;
}
 